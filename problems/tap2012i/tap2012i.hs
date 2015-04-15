main = do
   n <- fmap read getLine
   if n == -1
     then return ()
     else do fees <- fmap (map read . words) getLine
             print $ length (filter (\x -> x `rem` 100 == 0) (scanl1 (+) fees))
             main
