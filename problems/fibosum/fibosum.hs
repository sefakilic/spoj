-- https://proofwiki.org/wiki/Sum_of_Sequence_of_Fibonacci_Numbers

import Control.Monad

fib :: Integral a => a -> a -> a
fib 0 _ = 0
fib n m = fst $ fib2 (n-1) m
 
-- | Return (fib n, fib (n + 1))
fib2 0 _ = (1, 1)
fib2 1 _ = (1, 2)
fib2 n m
 | even n    = (mod (a*a + b*b) m, mod (c*c - a*a) m)
 | otherwise = (mod (c*c - a*a) m, mod (b*b + c*c) m)
 where (a,b) = fib2 (n `div` 2 - 1) m
       c     = a + b

fibsum a b =
  let m = 1000000007
      fibo = (fib (b+2) m) - (fib (a+1) m)
  in if fibo < 0
     then fibo + m
     else fibo
          

main = do
  t <- fmap read getLine
  forM [1..t] (\_ -> do
                  a:b:_ <- fmap (map read . words) getLine
                  putStrLn $ show (fibsum a b))
