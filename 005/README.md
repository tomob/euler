# Project Euler: Problem 5 - Smallest multiple

Problem's URL: https://projecteuler.net/problem=5

This is more of a mathematical problem than a programming problem. For
numbers up to 20 it can be done by hand: all that needs to be done is to
factor each number and create a set of factors.

It would be interesting to write a program to solve it for any number N.

## C++

I've implemented exactly the above algorithm. It is an exercise of
using C++'s `multiset`, `set_union` and `accumulate`.