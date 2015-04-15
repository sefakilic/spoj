
-- not the greatest way to do it

numdivisors 1 = 0
numdivisors n = aux n 2
  where
    aux 1 _ = 0
    aux n x = if n `rem` x == 0 then 1 + aux (n `div` x) x else aux n (x+1)

numdivisorsAll n = sum [numdivisors x | x <- [1..n], n `rem` x == 0]

main = do
  n <- fmap read getLine
  putStrLn $ show $ numdivisorsAll n
        
