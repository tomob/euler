module Main where

import Data.Numbers (primeFactors)
import Data.MultiSet (fromList, toList, maxUnion)

smallest :: Integer -> Integer
smallest n = product $ toList smallestFactorSet
    where
      factorsSets = map (fromList . primeFactors) [2..n]
      smallestFactorSet = foldl maxUnion (fromList []) factorsSets
    
main = do
  putStrLn $ "Smallest(10): " ++ show (smallest 10)
  putStrLn $ "Smallest(20): " ++ show (smallest 20)
