import Control.Monad
main = do
  t <- fmap read getLine
  forM [1..t] (\_ -> do
                  s <- getLine
                  putStrLn $ reverse s)
