election :: [Int] -> Bool
election xs = most >= 45 || and [most-x >= 10 | x <- ps, x /= most]
  where total = sum(xs)
        ps = map (\x -> (fromIntegral x) / (fromIntegral total) * 100) xs
        most = maximum ps

main = do
  getLine                       -- read number of candidates
  votes <- fmap (map read . words) getLine
  print (if election votes then 1 else 2)
  
  
  
