main = do
  getLine
  xs <- fmap (map (\x -> read x :: Int) . words) getLine
  let min = minimum xs
  print min
  print $ length $ filter (==min) xs
  
