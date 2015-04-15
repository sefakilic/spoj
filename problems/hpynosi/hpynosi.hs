import Control.Monad

sqDigits :: Int -> Int
sqDigits 0 = 0
sqDigits n = let (a,b) = n `quotRem` 10
             in b*b + sqDigits a

hpynosi :: Int -> [Int] -> Int
hpynosi 1 xs = length xs
hpynosi n xs = if n `elem` xs then -1 else hpynosi (sqDigits n) (n:xs)

main = do
  inp <- getLine
  forM [1..(read inp :: Int)] (\_ -> do
                                 inp <- getLine
                                 putStrLn $ show $ hpynosi (read inp :: Int) [])
