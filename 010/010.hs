module Main where

import Data.Numbers.Primes(primes)
    
main = do
  putStrLn $ "Sum of primes below 2000000: " ++ (show . sum $ primesBelowN 2000000)
      where
        primesBelowN n = takeWhile (\x -> x < n) primes
