#!/usr/bin/env python3
#
# Copyright (c) 2021 LunarG, Inc.
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to
# deal in the Software without restriction, including without limitation the
# rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
# sell copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
# FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
# IN THE SOFTWARE.

import json, inspect
from base_generator import write
from dx12_base_generator import Dx12BaseGenerator, Dx12GeneratorOptions
from dx12_consumer_layer_header_generator import Dx12ConsumerLayerHeaderGenerator, Dx12ConsumerLayerHeaderGeneratorOptions

class Dx12ConsumerLayerBodyGeneratorOptions(Dx12ConsumerLayerHeaderGeneratorOptions):

    def __init__(
        self,
        constructor_args,
        # Path to JSON file listing Vulkan API calls to override on capture.
        layer_overrides=None,
        # Path to JSON file listing apicalls and structs to ignore.
        blacklists=None,
        # Path to JSON file listing platform (WIN32, X11, etc.) defined types.
        platform_types=None,
        filename=None,
        directory='.',
        prefix_text='',
        protect_file=False,
        protect_feature=True
    ):
        Dx12ConsumerLayerHeaderGeneratorOptions.__init__(
            self, constructor_args, blacklists, platform_types, filename,
            directory, prefix_text, protect_file, protect_feature
        )
        self.layer_overrides = layer_overrides


class Dx12ConsumerLayerBodyGenerator(Dx12ConsumerLayerHeaderGenerator):

    LAYER_OVERRIDES = {}

    def beginFile(self, genOpts):
        Dx12ConsumerLayerHeaderGenerator.beginFile(self, genOpts)
        if genOpts.layer_overrides:
            overrides = json.loads(open(genOpts.layer_overrides, 'r').read())
            self.LAYER_OVERRIDES = overrides

    def write_include(self):
        write('#include "generated_dx12_consumer_layer.h"', file=self.outFile)
        self.newline()

    def generate_feature(self):
        Dx12BaseGenerator.generate_feature(self)
        self.write_dx12_consumer_class('Layer')

    def get_decoder_class_define(self, consumer_type):
        declaration = ''
        indent = ''
        function_class = 'Dx12{}Consumer::'.format(consumer_type)
        class_end = ''
        return (declaration, indent, function_class, class_end)

    def get_consumer_function_body(self, class_name, method_info, return_type):
        (_class_name, _object_id) = ('_' + class_name, 'object_id, ') if class_name else ('', '')
        _return_type = self.clean_type_define(return_type)

        _ret_value = 'return_value, ' if _return_type != 'void' else ''

        call_code = 'Process{}_{}(call_info, {}{}'.format(
            _class_name,
            method_info['name'],
            _object_id,
            _ret_value)

        for p in method_info['parameters']:
            call_code += p['name'] + ', '
        call_code = call_code[:-2] + ')'

        code = '\n'
        code += inspect.cleandoc('''
            {{
                Pre_{0};
                if (ShouldCallNextLayer()) {{
                    GetNextLayer()->{0};
                }}
                Post_{0};
            }}'''.format(call_code))
        return code
