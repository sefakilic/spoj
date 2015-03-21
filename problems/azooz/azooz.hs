import Control.Monad

azooz :: Int -> Int
azooz n = 3 * sum [1..n]

main = do
  t <- getLine
  forM [1..(read t :: Int)] (\a -> do
                 putStr ("Case #" ++ show a ++ ": ")
                 n <- getLine
                 putStrLn $ show $ azooz (read n :: Int))
  return ()
