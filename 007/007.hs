module Main where

import Data.Numbers.Primes(primes)
    
main = 
  putStrLn $ "10001st prime: " ++ (show $ (head . drop 10000) primes)
