module Main where

triplets :: [(Int, Int, Int)]
triplets = [(x, y, 1000-x-y) | x <- [1..1000], y <- [x..1000-x]]

pythagoean :: [(Int, Int, Int)] -> [(Int, Int, Int)]
pythagoean trs = filter isPitagorean trs
    where
      isPitagorean (a, b, c) = a*a + b*b == c*c

multiply :: [(Int, Int, Int)] -> [Int]
multiply ps = map multiply' ps
    where
      multiply' (a, b, c) = a*b*c
           
main = do
  putStrLn $ "a*b*c: " ++ show (head ((multiply . pythagoean) triplets))
