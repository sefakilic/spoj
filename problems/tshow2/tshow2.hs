import Control.Monad

fib :: Integral a => a -> a -> a
fib 1 _ = 0
fib n m = fst $ fib2 (n-2) m

-- | Return (fib n, fib (n + 1))
fib2 0 _ = (1, 1)
fib2 1 _ = (1, 2)
fib2 n m
 | even n    = (mod (a*a + b*b) m, mod (c*c - a*a) m)
 | otherwise = (mod (c*c - a*a) m, mod (b*b + c*c) m)
 where (a,b) = fib2 (n `div` 2 - 1) m
       c     = a + b

main = do
  t <- fmap read getLine
  forM [1..t] (\_ -> do
                  n <- fmap read getLine
                  print $ fib n 10)
