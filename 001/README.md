# Project Euler: Problem 001 - Multiplies of 3 and 5

Problem's URL: https://projecteuler.net/problem=1

This is a simple, warm-up problem. Here's a brief description of solutons
by language.

## C++

A straightforward iterative solution: iterate over numbers from 1
to 999; if a number is divisible by 3 or 5 (i.e. number modulo 3/5
equals zero), add it to the sum.

## Haskell

Haskell solution is a little more fancy. I take advantage of Haskell's
lazy nature to build an infinite list of natural numbers. Then I filter
it so that only numbers divisible by 3 or 5 remain. Next I take numbers
from that list smaller than 1000. Finall, I sum it. The whole thing is
almost a one-liner -- I extracted filter function for clarity.