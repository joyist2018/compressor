// Copyright (C) 2019 dreae
// 
// This file is part of compressor.
// 
// compressor is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// compressor is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with compressor.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>

#define xassert(expr)							\
    if (!(expr)) {						\
        fprintf(stderr, "%s:%s:%i: Assertion failed: "	\
            #expr ": errno: %d/\"%s\"\n",		\
            __FILE__, __func__, __LINE__,		\
            errno, strerror(errno));		\
        exit(EXIT_FAILURE);				\
    }							\

