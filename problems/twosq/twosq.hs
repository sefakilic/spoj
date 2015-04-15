intsqrt = floor . sqrt . fromIntegral

issq n = (sq*sq == n)
  where sq = intsqrt n

howmanysq n = sum [1 | x <- [0..intsqrt n], let sq = intsqrt (n-x*x), sq <= x, sq*sq + x*x == n]

main = do
  n <- fmap read getLine
  print $ howmanysq n
