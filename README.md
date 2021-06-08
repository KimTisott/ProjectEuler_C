<p align="center">
  <a href="https://projecteuler.net">
    <img src="https://projecteuler.net/images/clipart/euler_portrait.png">
  </a>
  <br>My implementations for solutions of <a href="https://projecteuler.net">Project Euler</a> challenges</br>
</p>

This repository contains the fastest non-trivial deterministic algorithm for each problem. The algorithms must accept different inputs when applicable, and avoid explicit arithmetic expressions or third-party libraries.

Here are some performance rules I've followed when writing the code:
- Iterate through only the values you need
- Avoid nested and/or conditional loops
- Allocate the minimum amount of memory

| Problem                                                           | Solution                                                                                | Mean    |
| :---------------------------------------------------------------: | :-------------------------------------------------------------------------------------: | :-----: |
| [Multiples of 3 and 5](https://projecteuler.net/problem=1)        | [C](https://github.com/KimTisott/ProjectEuler-Solutions/blob/main/Solutions/problem1.c) | 0.001ms |
| [Even Fibonacci numbers](https://projecteuler.net/problem=2)      | [C](https://github.com/KimTisott/ProjectEuler-Solutions/blob/main/Solutions/problem2.c) | 0.000ms |
| [Largest prime factor](https://projecteuler.net/problem=3)        | C | ms |
| [Largest palindrome product](https://projecteuler.net/problem=4)  | C | ms |
| [Smallest multiple](https://projecteuler.net/problem=5)           | C | ms |
| [Sum square difference](https://projecteuler.net/problem=6)       | C | ms |
| [10001st prime](https://projecteuler.net/problem=7)               | C | ms |
| [Largest product in a series](https://projecteuler.net/problem=8) | C | ms |
| [Special Pythagorean triplet](https://projecteuler.net/problem=9) | C | ms |

### TODO

- Running system information
- More precise timing (μs)
- Show allocated memory
