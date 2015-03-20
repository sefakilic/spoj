import Control.Monad

main = do
  n <- fmap read getLine
  forM [1..n] (\_ -> do
                  xs <- fmap (map read . words) getLine
                  print $ sum (take (xs!!2) [xs!!0, xs!!1..]))
