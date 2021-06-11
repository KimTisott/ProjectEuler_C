<p align="center">
  <a href="https://projecteuler.net">
    <img src="https://projecteuler.net/images/clipart/euler_portrait.png">
  </a>
  <br>My overly optimized implementations for solutions of <a href="https://projecteuler.net">Project Euler</a> challenges</br>
</p>

| ID  | Problem                                                                      | Solution                                                                                | Mean (μs) | SD (μs) |
| :-: | :--------------------------------------------------------------------------: | :-------------------------------------------------------------------------------------: | --------: | ------: |
| 1   | [Multiples of 3 and 5](https://projecteuler.net/problem=1)                   | [C](https://github.com/KimTisott/ProjectEuler-Solutions/blob/main/Solutions/problem1.c) | 0.072     | 0.047   |
| 2   | [Even Fibonacci numbers](https://projecteuler.net/problem=2)                 | [C](https://github.com/KimTisott/ProjectEuler-Solutions/blob/main/Solutions/problem2.c) | 0.057     | 0.051   |
| 3   | [Largest prime factor](https://projecteuler.net/problem=3)                   | [C](https://github.com/KimTisott/ProjectEuler-Solutions/blob/main/Solutions/problem3.c) | 42.687    | 3.210   |
| 4   | [Largest palindrome product](https://projecteuler.net/problem=4)             | [C](https://github.com/KimTisott/ProjectEuler-Solutions/blob/main/Solutions/problem4.c) | 773.424   | 40.034  |
| 5   | [Smallest multiple](https://projecteuler.net/problem=5)                      | [C](https://github.com/KimTisott/ProjectEuler-Solutions/blob/main/Solutions/problem5.c) | 0.710     | 0.039   |
| 6   | [Sum square difference](https://projecteuler.net/problem=6)                  | [C](https://github.com/KimTisott/ProjectEuler-Solutions/blob/main/Solutions/problem6.c) | 0.206     | 0.032   |
| 7   | [10001st prime](https://projecteuler.net/problem=7)                          | [C](https://github.com/KimTisott/ProjectEuler-Solutions/blob/main/Solutions/problem7.c) | 5079.883  | 257.699 |
| 8   | [Largest product in a series](https://projecteuler.net/problem=8)            | 
| 9   | [Special Pythagorean triplet](https://projecteuler.net/problem=9)            | 
| 10  | [Summation of primes](https://projecteuler.net/problem=10)                   | 
| 11  | [Largest product in a grid](https://projecteuler.net/problem=11)             | 
| 12  | [Highly divisible triangular number](https://projecteuler.net/problem=12)    | 
| 13  | [Large sum](https://projecteuler.net/problem=13)                             | 
| 14  | [Longest Collatz sequence](https://projecteuler.net/problem=14)              | 
| 15  | [Lattice paths](https://projecteuler.net/problem=15)                         | 
| 16  | [Power digit sum](https://projecteuler.net/problem=16)                       | 
| 17  | [Number letter counts](https://projecteuler.net/problem=17)                  | 
| 18  | [Maximum path sum I](https://projecteuler.net/problem=18)                    | 
| 19  | [Counting Sundays](https://projecteuler.net/problem=19)                      | 
| 20  | [Factorial digit sum](https://projecteuler.net/problem=20)                   | 
| 21  | [Amicable numbers](https://projecteuler.net/problem=21)                      | 
| 22  | [Names scores](https://projecteuler.net/problem=22)                          | 
| 23  | [Non-abundant sums](https://projecteuler.net/problem=23)                     | 
| 24  | [Lexicographic permutations](https://projecteuler.net/problem=24)            | 
| 25  | [1000-digit Fibonacci number](https://projecteuler.net/problem=25)           | 
| 26  | [Reciprocal cycles](https://projecteuler.net/problem=26)                     | 
| 27  | [Quadratic primes](https://projecteuler.net/problem=27)                      | 
| 28  | [Number spiral diagonals](https://projecteuler.net/problem=28)               | 
| 29  | [Distinct powers](https://projecteuler.net/problem=29)                       | 
| 30  | [Digit fifth powers](https://projecteuler.net/problem=30)                    | 
| 31  | [Coin sums](https://projecteuler.net/problem=31)                             | 
| 32  | [Pandigital products](https://projecteuler.net/problem=32)                   | 
| 33  | [Digit cancelling fractions](https://projecteuler.net/problem=33)            | 
| 34  | [Digit factorials](https://projecteuler.net/problem=34)                      | 
| 35  | [Circular primes](https://projecteuler.net/problem=35)                       | 
| 36  | [Double-base palindromes](https://projecteuler.net/problem=36)               | 
| 37  | [Truncatable primes](https://projecteuler.net/problem=37)                    | 
| 38  | [Pandigital multiples](https://projecteuler.net/problem=38)                  | 
| 39  | [Integer right triangles](https://projecteuler.net/problem=39)               | 
| 40  | [Champernowne's constant](https://projecteuler.net/problem=40)               | 
| 41  | [Pandigital prime](https://projecteuler.net/problem=41)                      | 
| 42  | [Coded triangle numbers](https://projecteuler.net/problem=42)                | 
| 43  | [Sub-string divisibility](https://projecteuler.net/problem=43)               | 
| 44  | [Pentagon numbers](https://projecteuler.net/problem=44)                      | 
| 45  | [Triangular, pentagonal, and hexagonal](https://projecteuler.net/problem=45) | 
| 46  | [Goldbach's other conjecture](https://projecteuler.net/problem=46)           | 
| 47  | [Distinct primes factors](https://projecteuler.net/problem=47)               | 
| 48  | [Self powers](https://projecteuler.net/problem=48)                           | 
| 49  | [Prime permutations](https://projecteuler.net/problem=49)                    | 
| 50  | [Consecutive prime sum](https://projecteuler.net/problem=50)                 | 

```c
// Debug x64
// main.c 4-6:
#define Function problemX
#define Repetitions 1000
#define Progress 0
```

Performance improvements and suggestions can be submitted [here](https://github.com/KimTisott/ProjectEuler-Solutions/issues/new).

Every implementation must be:
- Parameterized: the problem inputs must be defined at compile time
- Deterministic: one input results in the same output every run
- Non-trivial: there can be no unexplained values in the code
- Efficient: every microsecond, bit and joule matters

### TODO

- Include more time measurements
- Running system information
- Show allocated memory
- Linux compatibility
