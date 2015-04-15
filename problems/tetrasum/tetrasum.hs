import Control.Monad

tetrasum = (map f [0..])
  where f 0 = 0
        f 1 = 0
        f 2 = 0
        f 3 = 1
        f n = (tetrasum !! (n-1) + tetrasum !! (n-2) +
               tetrasum !! (n-3) + tetrasum !! (n-4)) `rem` 1000000007

tetrasum' a b = (sum $ drop a (take (b+1) tetrasum)) `rem` 1000000007

main = do
  t <- fmap read getLine
  forM [1..t] (\x -> do
                  xs <- fmap (map read . words) getLine
                  print (tetrasum' (head xs) (last xs)))

