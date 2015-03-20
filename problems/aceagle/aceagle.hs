import Control.Monad

angle h m = min angle (360-angle)
  where angle = abs (h - (m `div` 5)) * 30

main = do
  n <- fmap read getLine
  forM [1..n] (\_ -> do
                  xs <- fmap (map read . words) getLine
                  print $ angle (head xs) (last xs))
