import Control.Monad

main = do
  t <- fmap read getLine
  forM [1..t] (\_ -> do
                  a:b:_ <- fmap (map read . words) getLine
                  let (q,r) = quotRem a b
                    in putStrLn $ show q ++ " " ++ show r)
