import Control.Monad

tiles :: Int -> Integer
tiles = (map f [0 ..] !!)
  where f 0 = 1
        f 1 = 1
        f n = tiles (n-2) + tiles (n-1)


tiles' :: [Integer]
tiles' = map f [0 ..]
  where f 0 = 1
        f 1 = 1
        f n = tiles' !! (n-2) + tiles' !! (n-1)

tiles'' :: Int -> Integer
tiles'' = (tiles' !!)

main = do
  n <- fmap read getLine
  forM [1..n] (\_ -> do
                  t <- fmap read getLine
                  print $ tiles t)
