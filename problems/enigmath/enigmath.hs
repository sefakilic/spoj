import Control.Monad

enigmath a b = (b `quot` g, a `quot` g)
  where g = gcd a b

main = do
  t <- fmap read getLine
  forM [1..t] (\_ -> do
                  a:b:_ <- fmap (map read . words) getLine
                  let (x,y) = enigmath a b
                  putStrLn $ show x ++ " " ++ show y)
