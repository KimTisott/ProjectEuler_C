<p align="center">
  <a href="https://projecteuler.net">
    <img src="https://projecteuler.net/images/clipart/euler_portrait.png">
  </a>
  <br>My implementations for solutions of <a href="https://projecteuler.net">Project Euler</a> challenges</br>
</p>

| Problem                                                           | Solution                                                                                | Mean (μs) |
| :---------------------------------------------------------------: | :-------------------------------------------------------------------------------------: | :-------: |
| [Multiples of 3 and 5](https://projecteuler.net/problem=1)        | [C](https://github.com/KimTisott/ProjectEuler-Solutions/blob/main/Solutions/problem1.c) | 0.013     |
| [Even Fibonacci numbers](https://projecteuler.net/problem=2)      | [C](https://github.com/KimTisott/ProjectEuler-Solutions/blob/main/Solutions/problem2.c) | 0.017     |
| [Largest prime factor](https://projecteuler.net/problem=3)        | [C](https://github.com/KimTisott/ProjectEuler-Solutions/blob/main/Solutions/problem3.c) | 0.017     |
| [Largest palindrome product](https://projecteuler.net/problem=4)  | [C](https://github.com/KimTisott/ProjectEuler-Solutions/blob/main/Solutions/problem4.c) | 48.754    |
| [Smallest multiple](https://projecteuler.net/problem=5)           | - | - |
| [Sum square difference](https://projecteuler.net/problem=6)       | - | - |
| [10001st prime](https://projecteuler.net/problem=7)               | - | - |
| [Largest product in a series](https://projecteuler.net/problem=8) | - | - |
| [Special Pythagorean triplet](https://projecteuler.net/problem=9) | - | - |

Benchmark configs:
```c
// main.c 4-6
#define BenchmarkRuns 1000000
#define BenchmarkFunction problem1
#define BenchmarkProgress 0
```

There are certain rules that every solution must comply:
- Parameterized: the problem description inputs must be previously defined
- Deterministic: one input results in the same output every run
- Non-trivial: there can be no unexplained values in the code
- Efficient: every microsecond, bit and joule matters

Here are some performance rules I've followed when writing the code:
- Allocate the minimum amount of memory
- Iterate through only the values you need
- Avoid nested and/or conditional loops

### TODO

- Include other time measurements
- Running system information
- Show allocated memory
