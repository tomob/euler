module Main where

import Data.Numbers.Primes

factors :: Integer -> [Integer]
factors n = factors' [] n primes
    where
      factors' fs 1 _      = fs
      factors' fs n (p:ps)
          | n `mod` p == 0 = factors' (p:fs) (n `div` p) ps
          | otherwise      = factors' fs n ps

largestPrime :: Integer -> Integer
largestPrime n = head $ factors n
              
-- Another solution:

candidatePrimes :: Integer -> [Integer]
candidatePrimes n = reverse . takeWhile (<= roundedRoot) $ primes
    where
      roundedRoot = toInteger $ floor $ sqrt $ fromInteger n

largestPrime2 :: Integer -> Integer
largestPrime2 n = largestPrime' $ candidatePrimes n
    where
      largestPrime' (x:xs)
          | n `rem` x == 0 = x
          | otherwise      = largestPrime' xs

main = do
  putStrLn $ "Largest: " ++ show (largestPrime 600851475143)
