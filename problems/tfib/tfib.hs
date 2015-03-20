fibo = 1 : 2 : zipWith (+) fibo (tail fibo)

howManyFibo :: Integer -> Integer -> Int
howManyFibo a b = length $ takeWhile (<= b) $ dropWhile (< a) fibo

main = do
  a:b:_ <- fmap (map read . words) getLine
  if (a == 0 && b == 0)
    then return ()
    else (do
             putStrLn $ show $ howManyFibo a b
             main)
