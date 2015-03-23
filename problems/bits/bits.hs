import Control.Monad

bits :: Int -> Int
bits 0 = 0
bits 1 = 1
bits n = let (a,b) = quotRem n 2 in b + bits a

sumBits :: Int -> Int
sumBits n = sum $ map bits [1..n]


main = do
  t <- getLine
  forM [1..(read t :: Int)] (\_ -> do
                               n <- getLine
                               putStrLn $ show $ sumBits (read n :: Int))
