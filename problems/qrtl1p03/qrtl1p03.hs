main = do
  m:n:p:_ <- fmap (map read . words) getLine
  if m < n
    then putStrLn $ show (m*n+p)
    else putStrLn $ show ((m+n)*p)
         
