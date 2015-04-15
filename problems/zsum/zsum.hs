modpow 0 _ _ = 0
modpow n 0 m = 1 `mod` m
modpow n 1 m = n `mod` m
modpow n k m
  | odd k = (n * half * half) `mod` m
  | even k = (half * half) `mod` m
  where half = modpow n (k `div` 2) m

-- result is 2(n-1)^k + n^k + 2(n-1)^(n-1) + n^n
m = 10000007
zsum n k = (2 * (modpow (n-1) k m) + (modpow n k m) +
            2 * (modpow (n-1) (n-1) m) + (modpow n n m)) `mod` m

main = do
  n:k:_ <- fmap (map read . words) getLine
  if not (n == 0 && k == 0)
    then do putStrLn $ show $ zsum n k
            main
    else return ()

