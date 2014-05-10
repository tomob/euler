module Main where

import Data.Set (toList, fromList)
import Data.List (sort)
    
isPalindrome :: Integer -> Bool
isPalindrome n = s1 == (reverse s2)
    where
      (s1, s2) = splitAt mid s
      s        = show n
      mid      = length s `div` 2

products :: [Integer]
products = [n*m | n <- [100..999], m <- [100..999]]

largestPalindrome :: Integer
largestPalindrome = head . filter isPalindrome . reverse . sort $ uniquePs
    where
      uniquePs = toList . fromList $ products
    
main = do
  putStrLn $ "Largest: " ++ show largestPalindrome
