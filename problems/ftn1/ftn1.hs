import Control.Monad
main = do
  t <- fmap read getLine
  forM [1..t] (\c -> do
                  n <- fmap read getLine
                  putStrLn $ "Case " ++ show c ++ ": " ++ show (2*n-1))
