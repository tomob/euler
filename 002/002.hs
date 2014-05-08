module Main where

fibs :: [Int]
fibs = 0 : 1 : zipWith (+) fibs (tail fibs)

evenFibs :: [Int]
evenFibs = filter even fibs

sumEven :: Int -> Int
sumEven upTo = sum . takeWhile (< upTo) $ evenFibs
           
main = do
  putStrLn $ "Sum: " ++ show (sumEven 4000000)
