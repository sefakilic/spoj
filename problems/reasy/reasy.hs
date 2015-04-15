
import Control.Monad

candies xs = foldl1 (\x y -> max (x+y) (x-y)) xs

main = do
  n <- fmap read getLine
  forM [1..n] (\x -> do
                  putStr $ "Case " ++ show x ++ ": "
                  getLine
                  xs <- fmap (map read . words) getLine
                  print $ candies xs)
