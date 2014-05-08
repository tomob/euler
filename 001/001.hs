module Main where

multiplesOf3or5 :: Int -> Int
multiplesOf3or5 upTo = sum . takeWhile (< upTo) . filter divisibleBy3Or5 $ [1..]
    where
      divisibleBy3Or5 x = x `mod` 3 == 0 || x `mod` 5 == 0
    
main = do
  let number = multiplesOf3or5 1000
  putStrLn $ "Sum: " ++ (show number)
