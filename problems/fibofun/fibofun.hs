import Control.Monad

fib :: Integral a => a -> a -> a
fib n m = fst $ fib2 (n-1) m
 
-- | Return (fib n, fib (n + 1))
fib2 0 _ = (1, 1)
fib2 1 _ = (1, 2)
fib2 n m
 | even n    = (mod (a*a + b*b) m, mod (c*c - a*a) m)
 | otherwise = (mod (c*c - a*a) m, mod (b*b + c*c) m)
 where (a,b) = fib2 (n `div` 2 - 1) m
       c     = a + b

fibofun :: Integral a => a -> a -> a -> a -> a
fibofun _ _ 0 _ = 0
fibofun a b n m = mod ((fib n m) * a + fib (n+1) m * b - b) m

main :: IO [()]
main = do
  t <- fmap read getLine
  forM [1..t] (\_ -> do
                  (a:b:n:m:_) <- fmap (map read . words) getLine
                  putStrLn $ show $ fibofun a b n m)

