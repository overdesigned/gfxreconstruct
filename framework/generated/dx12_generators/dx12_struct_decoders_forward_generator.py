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
from base_generator import *
from dx12_base_generator import *
from base_struct_decoders_header_generator import *


# Generates C++ functions responsible for decoding Dx12 API calls
class Dx12StructDecodersForwardGenerator(
        Dx12BaseGenerator, BaseStructDecodersHeaderGenerator):

    def __init__(self, source_dict, dx12_prefix_strings,
                 errFile=sys.stderr,
                 warnFile=sys.stderr,
                 diagFile=sys.stdout):
        Dx12BaseGenerator.__init__(
            self, source_dict, dx12_prefix_strings,
            errFile, warnFile, diagFile)
        self.check_blacklist = True

    # Method override
    def beginFile(self, gen_opts):
        BaseGenerator.beginFile(self, gen_opts)

        self.write_include()
        write('GFXRECON_BEGIN_NAMESPACE(gfxrecon)', file=self.outFile)
        write('GFXRECON_BEGIN_NAMESPACE(decode)', file=self.outFile)
        self.newline()

    # Method override
    def generateFeature(self):
        Dx12BaseGenerator.generateFeature(self)
        self.write_struct()

    # Method override
    def write_include(self):
        code = ("\n"
                "#include \"generated_dx12_struct_decoders.h\"\n"
                "\n")
        write(code, file=self.outFile)

    def get_struct_function_body(self, properties):
        return ';'

    def get_struct_function(self, name, properties):
        code = ('size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_{}* wrapper)'  # noqa
                .format(name))
        code += self.get_struct_function_body(properties)
        code += '\n\n'
        return code

    def write_struct(self):
        code = ''
        header_dict = self.source_dict['header_dict']
        for k, v in header_dict.items():
            code_length = len(code)
            for k2, v2 in v.classes.items():
                if self.is_required_struct_data(k2, v2):
                    code += self.get_struct_function(k2, v2['properties'])

            code_length2 = len(code)
            if code_length2 > code_length:
                code = code[:code_length] + \
                    self.dx12_prefix_strings.format(
                        k) + '\n' + code[code_length:]

        write(code, file=self.outFile)
 
    # Method override
    def endFile(self):
        self.newline()
        write('GFXRECON_END_NAMESPACE(decode)', file=self.outFile)
        write('GFXRECON_END_NAMESPACE(gfxrecon)', file=self.outFile)

        # Finish processing in superclass
        BaseGenerator.endFile(self)