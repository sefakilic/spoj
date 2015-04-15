import Control.Monad
import Data.List

main = do
  n <- fmap read getLine
  forM [1..n] (\_ -> do
                  xs <- fmap (map read . words) getLine
                  print (head xs * last xs))
                  
