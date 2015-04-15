import Control.Monad
import Data.List

rational :: Int -> Integer
rational 1 = 0
rational n = sum [1 | x <- [1..n], gcd x n == 1] + rational (n-1)

main = do
  t <- fmap read getLine
  forM [1..t] (\_ -> do
                  n <- fmap read getLine
                  print (rational n))
