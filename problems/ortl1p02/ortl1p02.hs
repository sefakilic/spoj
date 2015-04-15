main = do
  xs <- fmap (map (\x -> read x :: Int) . words) getLine
  print $ maximum xs
