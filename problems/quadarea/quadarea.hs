import Data.List
import Text.Printf
import Control.Monad

area :: [Double] -> Double
area xs = sqrt $ product (map (\x -> s-x) xs)
  where s = sum xs / 2

main = do
  t <- fmap read getLine
  forM [1..t] (\_ -> do
                  xs <- fmap (map read . words) getLine
                  let area = quadarea xs
                  putStrLn $ printf "%.2f" area)
