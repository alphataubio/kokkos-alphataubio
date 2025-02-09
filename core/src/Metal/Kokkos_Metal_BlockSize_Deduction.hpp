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

// Kokkos_Metal_BlockSize_Deduction.hpp
#ifndef KOKKOS_METAL_BLOCKSIZE_DEDUCTION_HPP
#define KOKKOS_METAL_BLOCKSIZE_DEDUCTION_HPP

namespace Kokkos {
namespace Impl {

inline int get_optimal_block_size() {
    // Metal does not provide direct block size tuning APIs like CUDA
    return 256; // Default block size, can be tuned further
}

} // namespace Impl
} // namespace Kokkos

#endif // KOKKOS_METAL_BLOCKSIZE_DEDUCTION_HPP

