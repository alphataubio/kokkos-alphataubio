// Kokkos_Metal_abort.hpp
// Copyright remains intact
#ifndef KOKKOS_METAL_ABORT_HPP
#define KOKKOS_METAL_ABORT_HPP

#include <metal_stdlib>
using namespace metal;

namespace Kokkos {
namespace Impl {

inline void metal_abort() {
    // Metal does not support direct aborts, so use a workaround
    device atomic_int* abort_flag;
    atomic_store_explicit(abort_flag, 1, memory_order_relaxed);
}

} // namespace Impl
} // namespace Kokkos

#endif // KOKKOS_METAL_ABORT_HPP



// Kokkos_Metal_ParallelFor.hpp
#ifndef KOKKOS_METAL_PARALLELFOR_HPP
#define KOKKOS_METAL_PARALLELFOR_HPP

#include <metal_stdlib>
using namespace metal;

namespace Kokkos {
namespace Impl {

template<typename FunctorType>
kernel void parallel_for(uint thread_id [[thread_position_in_grid]],
                         uint num_threads [[threads_per_grid]],
                         device FunctorType* functor) {
    if (thread_id < num_threads) {
        (*functor)(thread_id);
    }
}

} // namespace Impl
} // namespace Kokkos

#endif // KOKKOS_METAL_PARALLELFOR_HPP
