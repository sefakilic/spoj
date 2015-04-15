import Control.Monad

ndigit :: Integer -> Integer
ndigit 1 = 10
ndigit n = 10^n - (10^(n-1))

main = do
  t <- fmap read getLine
  forM [1..t] (\_ -> do
                  n <- fmap read getLine
                  putStrLn $ show $ ndigit n)
