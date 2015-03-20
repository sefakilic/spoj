import Control.Monad
import Data.List

ahmax :: [Int] -> (Int, Int)
ahmax xs = (head $ elemIndices b xs, head $ elemIndices a xs)
  where (a:b:_) = reverse $ sort xs
                 

main = do
  t <- fmap read getLine
  forM [1..t] (\_ -> do
                  nums <- fmap (map read . words) getLine
                  let (a,b) = ahmax (tail nums)
                  putStrLn $ show ((min a b)+1) ++ " " ++ show ((max a b)+1))
