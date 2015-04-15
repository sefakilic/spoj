import Control.Monad

digsum n
  | n < 10 = n
  | otherwise = digsum (digsum (n `div` 10) + (n `rem` 10))

main = do
  t <- fmap read getLine
  forM [1..t] (\_ -> do
                n <- fmap read getLine
                putStrLn $ show $ digsum n)
