//@HEADER
// ************************************************************************
//
//                        Kokkos v. 4.0
//       Copyright (2022) National Technology & Engineering
//               Solutions of Sandia, LLC (NTESS).
//
// Under the terms of Contract DE-NA0003525 with NTESS,
// the U.S. Government retains certain rights in this software.
//
// Part of Kokkos, under the Apache License v2.0 with LLVM Exceptions.
// See https://kokkos.org/LICENSE for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//@HEADER

// Kokkos_MetalSpace.hpp
#ifndef KOKKOS_METALSPACE_HPP
#define KOKKOS_METALSPACE_HPP

#import <Foundation/Foundation.h>
#import <Metal/Metal.h>
#include <metal_stdlib>
using namespace metal;

namespace Kokkos {

struct MetalSpace {
    using execution_space = MetalSpace;
    using memory_space = MetalSpace;
    using device_type = MetalSpace;
    
    static void* allocate(size_t size) {
        return malloc(size);
    }
    static void deallocate(void* ptr) {
        free(ptr);
    }
};

} // namespace Kokkos


//----------------------------------------------------------------------------
//----------------------------------------------------------------------------

#endif /* #if defined( KOKKOS_ENABLE_METAL ) */
#endif /* #define KOKKOS_METALSPACE_HPP */

