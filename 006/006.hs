module Main where

-- Quickly sums numbers form 1 to N
quicksum :: Integer -> Integer
quicksum n = (n + 1) * n `div` 2

diff :: Integer -> Integer
diff n = toInteger $ floor $ (fromInteger (quicksum n) :: Float) ** 2 - sumOfSquares n
    where
      sumOfSquares n = sum $ map (\x -> (fromInteger x) ** 2) [1..n]
             
main = do
  putStrLn $ "Diff(10): " ++ show (diff 10)
  putStrLn $ "Diff(10): " ++ show (diff 100)
