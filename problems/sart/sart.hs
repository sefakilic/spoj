import Data.List

main = do
  getLine
  xs <- fmap (map (\x -> read x :: Int) . words) getLine
  putStrLn $ intercalate " " (map show (sort xs))
