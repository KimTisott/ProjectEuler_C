<p align="center">
  <a href="https://projecteuler.net">
    <img src="https://projecteuler.net/images/clipart/euler_portrait.png">
  </a>
  <br>My implementations for solutions of <a href="https://projecteuler.net">Project Euler</a> challenges</br>
</p>

This repository contains the fastest non-trivial deterministic algorithm for each problem. The algorithms must accept different inputs when applicable, and avoid third-party libraries.

| Problem                                                           | Solution                                                                      | Mean    |
| :---------------------------------------------------------------: | :---------------------------------------------------------------------------: | :-----: |
| [Multiples of 3 and 5](https://projecteuler.net/problem=1)        | [C](https://github.com/KimTisott/ProjectEuler-Solutions/blob/main/problem1.c) | 0.013μs |
| [Even Fibonacci numbers](https://projecteuler.net/problem=2)      | [C](https://github.com/KimTisott/ProjectEuler-Solutions/blob/main/problem2.c) | 0.017μs |
| [Largest prime factor](https://projecteuler.net/problem=3)        | C | - |
| [Largest palindrome product](https://projecteuler.net/problem=4)  | C | - |
| [Smallest multiple](https://projecteuler.net/problem=5)           | C | - |
| [Sum square difference](https://projecteuler.net/problem=6)       | C | - |
| [10001st prime](https://projecteuler.net/problem=7)               | C | - |
| [Largest product in a series](https://projecteuler.net/problem=8) | C | - |
| [Special Pythagorean triplet](https://projecteuler.net/problem=9) | C | - |

Benchmark configs:
```c
// main.c 5-8
#define BenchmarkOnly 1
#define BenchmarkRuns 1000000
#define BenchmarkFunction problem1
#define BenchmarkProgress 0
```

Here are some performance rules I've followed when writing the code:
- Iterate through only the values you need
- Avoid nested and/or conditional loops
- Allocate the minimum amount of memory

### TODO

- Include other time measurements
- Running system information
- Show allocated memory
