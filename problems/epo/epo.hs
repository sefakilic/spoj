main = do
  xs <- fmap (map read . words) getLine
  print $ head xs ^ last xs
