import Control.Monad

mst :: Int -> Int
mst = (map f [0..] !!)
  where f n
          | n == 1           = 0
          | even n           = min (1 + mst (n `div` 2)) (n-1)
          | (n `rem` 3 == 0) = min (1 + mst (n `div` 3)) (n-1)
          | otherwise        = 1 + mst (n-1)

main = do
  t <- fmap read getLine
  forM [1..t] (\x -> do
                  n <- fmap read getLine
                  putStrLn $ "Case " ++ show x ++ ": " ++ show (mst n))

