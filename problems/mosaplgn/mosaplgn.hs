import Control.Monad
main = do
  n <- fmap read getLine
  forM [1..n] (\_ -> do
                  xs <- fmap (map (\x -> read x :: Double) . words) getLine
                  putStrLn (if sum (tail xs) == ((head xs)-2)*180
                            then "POSSIBLE"
                            else "IMPOSSIBLE"))
