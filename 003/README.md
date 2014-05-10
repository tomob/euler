# Project Euler: Problem 003 - Largest prime factor

Problem's URL: https://projecteuler.net/problem=3

This problem involves prime numbers, so I needed to do some research into
fast methods of finding prime numbers. Haskell Wiki has a fantastic page
on prime numbers: http://www.haskell.org/haskellwiki/Prime_numbers.

## Haskell

I implemented two solutions to this problem:

The first is to simply factorize the provided number and take the largest.

The second solution is to prepare a list of primes up to the square root
of n, and find a divisor starting from the highest number.

The first one prooved to be waaaay faster.

## C++

