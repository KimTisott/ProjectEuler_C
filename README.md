<p align="center">
  <a href="https://projecteuler.net">
    <img src="https://projecteuler.net/images/clipart/euler_portrait.png">
  </a>
  <br>My implementations for solutions of <a href="https://projecteuler.net">Project Euler</a> challenges</br>
</p>

This repository contains the fastest non-trivial deterministic algorithm for each problem. The algorithms have to accept different inputs when applicable and avoid explicit arithmetic expressions.

Here are some performance rules I've followed when writing the code:
- Iterate through only the values you need
- Avoid nested and/or conditional loops
- Allocate the minimum amount of memory
