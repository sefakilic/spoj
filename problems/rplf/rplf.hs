type time = (Int, Int)

main = do
  t <- fmap read getLine
  forM [1..t] (\x -> do
                 n <- fmap read getLine
                 let (h,m) = rodolfo n
                 putStrLn "Scenario #" ++ show n ++ show h ++ ":" ++ show m
                 
                 
