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

import sys
from base_generator import write
from dx12_base_generator import Dx12BaseGenerator, Dx12GeneratorOptions
from dx12_consumer_header_generator import Dx12ConsumerHeaderGenerator, Dx12ConsumerHeaderGeneratorOptions


class Dx12ConsumerLayerHeaderGeneratorOptions(
    Dx12ConsumerHeaderGeneratorOptions
):
    """Options for generating a C++ class for Dx12 capture file consumer layer."""

    def __init__(
        self,
        constructor_args=None,  # Path to JSON file listing Vulkan API calls to override on replay.
        blacklists=None,  # Path to JSON file listing apicalls and structs to ignore.
        platform_types=None,  # Path to JSON file listing platform (WIN32, X11, etc.) defined types.
        filename=None,
        directory='.',
        prefix_text='',
        protect_file=False,
        protect_feature=True
    ):
        Dx12ConsumerHeaderGeneratorOptions.__init__(
            self, constructor_args, blacklists, platform_types, filename,
            directory, prefix_text, protect_file, protect_feature
        )


class Dx12ConsumerLayerHeaderGenerator(Dx12ConsumerHeaderGenerator):
    """Generates C++ functions responsible for consuming Dx12 API calls in a layer."""

    def __init__(
        self,
        source_dict,
        dx12_prefix_strings,
        err_file=sys.stderr,
        warn_file=sys.stderr,
        diag_file=sys.stdout
    ):
        self.METHODCALL_BLACKLIST = []
        Dx12ConsumerHeaderGenerator.__init__(self, source_dict,
            dx12_prefix_strings, err_file, warn_file, diag_file
        )
        self.gen_consumer_function_step=0

    def generate_feature(self):
        """Methond override."""
        Dx12BaseGenerator.generate_feature(self)
        self.write_dx12_consumer_class('Layer')

    def write_include(self):
        code = ("\n" "#include \"decode/dx12_consumer_layer_base.h\"\n" "\n")
        write(code, file=self.outFile)

    def get_consumer_function_body(self, class_name, method_info, return_type):
        if self.gen_consumer_function_step == 0:
            self.gen_consumer_function_step = 1
            pre_func = self.get_consumer_function(class_name, method_info, consumer_type='', indent='    virtual ', function_class='Pre_')
            post_func = self.get_consumer_function(class_name, method_info, consumer_type='', indent='    virtual ', function_class='Post_')
            self.gen_consumer_function_step = 0
            return ';\n\n' + pre_func + post_func[:-2]
        else:
            return ' { }'
