import Control.Monad

main = do
  n <- fmap read getLine
  forM [1..n] (\i -> do
                  xs <- fmap (map (\x -> read x :: Int) . words) getLine
                  y <- fmap read getLine
                  putStr $ "Case " ++ show i ++ ": "
                  putStrLn (if y `elem` xs then "YES" else "NO"))
