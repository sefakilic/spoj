main = do
  nums <- getLine
  let a:b:_ = map (\x -> read x :: Int) $ words nums
  putStrLn $ show (a + b)
  
  
     
