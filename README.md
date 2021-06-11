<p align="center">
  <a href="https://projecteuler.net">
    <img src="https://projecteuler.net/images/clipart/euler_portrait.png">
  </a>
  <br>My overly optimized implementations for solutions of <a href="https://projecteuler.net">Project Euler</a> challenges</br>
</p>

| ID  | Problem                                                           | Solution                                                                                | Mean (μs) | SD (μs) |
| :-: | :---------------------------------------------------------------: | :-------------------------------------------------------------------------------------: | --------: | ------: |
| 1   | [Multiples of 3 and 5](https://projecteuler.net/problem=1)        | [C](https://github.com/KimTisott/ProjectEuler-Solutions/blob/main/Solutions/problem1.c) | 0.072     | 0.047   |
| 2   | [Even Fibonacci numbers](https://projecteuler.net/problem=2)      | [C](https://github.com/KimTisott/ProjectEuler-Solutions/blob/main/Solutions/problem2.c) | 0.057     | 0.051   |
| 3   | [Largest prime factor](https://projecteuler.net/problem=3)        | [C](https://github.com/KimTisott/ProjectEuler-Solutions/blob/main/Solutions/problem3.c) | 42.687    | 3.210   |
| 4   | [Largest palindrome product](https://projecteuler.net/problem=4)  | [C](https://github.com/KimTisott/ProjectEuler-Solutions/blob/main/Solutions/problem4.c) | 803.261   | 43.106  |
| 5   | [Smallest multiple](https://projecteuler.net/problem=5)           | [C](https://github.com/KimTisott/ProjectEuler-Solutions/blob/main/Solutions/problem5.c) | 0.710     | 0.039   |
| 6   | [Sum square difference](https://projecteuler.net/problem=6)       | [C](https://github.com/KimTisott/ProjectEuler-Solutions/blob/main/Solutions/problem6.c) | 0.235     | 0.050   |
| 7   | [10001st prime](https://projecteuler.net/problem=7)               | [C](https://github.com/KimTisott/ProjectEuler-Solutions/blob/main/Solutions/problem7.c) | 5507.500  | 118.008 |
| 8   | [Largest product in a series](https://projecteuler.net/problem=8) | - | - |
| 9   | [Special Pythagorean triplet](https://projecteuler.net/problem=9) | - | - |

Benchmark configs:
```c
// Debug x64
// main.c 4-6:
#define Function problemX
#define Repetitions 1000
#define Progress 0
```

Every solution must be:
- Parameterized: the problem inputs must be defined at compile time
- Deterministic: one input results in the same output every run
- Non-trivial: there can be no unexplained values in the code
- Efficient: every microsecond, bit and joule matters

Here are the followed performance rules:
- Allocate the minimum amount of memory
- Iterate through only the values you need
- Use as little conditions as possible

### TODO

- Include more time measurements
- Running system information
- Show allocated memory
- Linux compatibility
