import Control.Monad

main = do
  n <- fmap read getLine
  forM [1..n] (\_ -> do
                  str <- getLine
                  indices <- sequence $ replicate (length str) (fmap read getLine)
                  putStrLn $ [str !! (i-1) | i <- indices])
