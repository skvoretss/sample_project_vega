#include <benchmark/benchmark.h>
#include "my_add.hpp"

static void BM_BasicTimer(benchmark::State& state) {
  for (auto _ : state) {
    my_add(3, 5);
  }
}

BENCHMARK(BM_BasicTimer);

BENCHMARK_MAIN();