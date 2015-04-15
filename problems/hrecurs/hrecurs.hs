import Control.Monad

mysum (x:[]) = x
mysum (x:xs) = x + mysum xs

main = do
  t <- fmap read getLine
  forM [1..t] (\x -> do
                  putStr $ "Case " ++ show x ++ ": "
                  nums <- fmap (map (\x -> read x :: Int) . words) getLine
                  putStrLn $ show (mysum (tail nums)))
