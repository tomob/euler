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

A simple, lazy solution. Iterate over all numbers from 2 to sqare root
of 600851475143. If the number is prime (tested with a simplistic function)
and it divides N, mark it. After the iteration is over, print last marked
number.