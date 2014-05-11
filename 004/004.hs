module Main where

import Data.Set (toList, fromList)
import Data.List (sortBy)
    
isPalindrome :: Integer -> Bool
isPalindrome n = s1 == (reverse s2)
    where
      (s1, s2) = splitAt mid s
      s        = show n
      mid      = length s `div` 2

products :: [Integer]
products = [n*m | n <- [100..999], m <- [100..999]]

largestPalindrome :: Integer
largestPalindrome = head . filter isPalindrome . sortBy higher $ uniquePs
    where
      uniquePs = toList . fromList $ products
      higher a b
          | a > b = LT
          | otherwise = GT
    
main = do
  putStrLn $ "Largest: " ++ show largestPalindrome
