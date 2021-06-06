<p align="center">
  <a href="https://projecteuler.net">
    <img src="https://projecteuler.net/images/clipart/euler_portrait.png">
  </a>
  <br>My implementations for solutions of <a href="https://projecteuler.net">Project Euler</a> challenges</br>
</p>

This repository contains the fastest non-trivial possible solution for each problem. Therefore, every solution must:
1. Result in the correct value
2. Run faster than any other
3. Not be an arithmetic expression

Regarding rule number 3 above, it became necessary when some problems were found to be solved using just a mathematical formula, like problem1 for example (e.g. sum of n terms in AP). The result is that one could simply minify the expression and thus achieve better performance. With this in mind, I decided to not allow this type of solution.

The implementations were coded in C because of its high speed and low allocation, along with an above average memory control. Also it performs quite evenly in the benchmarks, without many deviations, while keeping a steady mean time throughout.
