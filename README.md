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

| Problem                                                      | Solution                                                                                | Mean    |
| :----------------------------------------------------------: | :-------------------------------------------------------------------------------------: | :-----: |
| [Multiples of 3 and 5](https://projecteuler.net/problem=1  ) | [C](https://github.com/KimTisott/ProjectEuler-Solutions/blob/main/Solutions/problem1.c) | 0.001ms |
| [Even Fibonacci numbers](https://projecteuler.net/problem=1) | [C](https://github.com/KimTisott/ProjectEuler-Solutions/blob/main/Solutions/problem2.c) | 0.000ms |

### TODO

- Running system information
- More precise timing (μs)
- Show allocated memory
