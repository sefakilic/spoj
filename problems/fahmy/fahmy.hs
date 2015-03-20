import Data.Ratio
import Control.Monad

showRatio r 
  | n >= d    = (show $ n `div` d) ++ " " ++ (show $ n `rem` d) ++ "/" ++ (show d)
  | otherwise = (show n) ++ "/" ++ (show d)
  where d = denominator r
        n = numerator r

line2ratio :: String -> Ratio Int
line2ratio line = (read a) % (read (tail b))
  where (a,b) = span (/='/') line

main = do
  t <- fmap read getLine
  forM [1..t] (\_ -> do
                  n <- fmap read getLine
                  nums <- sequence $ replicate n (fmap line2ratio getLine)
                  putStrLn $ showRatio (sum nums))
                  
