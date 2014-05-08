# Project Euler: Problem 002 - Even Fibonacci numbers

Another simple task.

## C++

The solution is a little more complicated then strictly needed, but I
find it more elegant. I start with generating a list of all Fibonacci
numbers up to a value. Then I remove odd numbers. After that all that
needs to be done is to sum the remaining numbers.

## Haskell

Haskell solution is way more elegant. I start with canonical one-line
infinite Fibonacci generator. Then I filter even numbers and sum a portion
of the numbers.

It does exactly the same job as C++ version, but each function is one line
long (not counting signatures). I really like the brevity and elegance of
functional solutions in Haskell.