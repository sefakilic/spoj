import Control.Monad

main = do
  n <- fmap read getLine
  forM [1..n] (\_ -> do
                  br <- fmap read getLine
                  print (br * (br+1) `div` 2 * 3))
