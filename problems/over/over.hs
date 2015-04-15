import Control.Monad

-- return number of 2-, 4- and 6-ending n-words
over :: Int -> [Int]
over 1 = [1, 1, 1]
over n = [a+b, a+b+c, b+c]
    where (a:b:c:_) = over (n-1)

main = do
  t <- fmap read getLine
  forM [1..t] (\_ -> do
                 n <- fmap read getLine
                 putStrLn $ show $ sum (over n))
  
