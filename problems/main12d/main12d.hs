import Control.Monad
import Control.Applicative


dice :: Int -> [Int] -> (Int, Int)
dice _ [] = (1, 1)
dice n throws
  | a == 0 = (0, 1)
  | otherwise = (a `div` g, n `div` g)
  where a = n - (maximum throws)
        g = gcd a n

main = do
  t <- fmap read getLine
  nums <- fmap (map read . words) getLine
  forM [1..t] (\x -> do
                  n:m:_ <- fmap (map read . words) getLine
                  throws <- if (m==0)
                            then pure []
                            else fmap (map read . words) getLine
                  let (a,b) = dice n throws
                    in putStrLn $ "Case #" ++ show x ++ ": " ++ show a ++ "/" ++ show b)
                            

