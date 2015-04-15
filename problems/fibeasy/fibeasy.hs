import Control.Monad
import Data.List

fibs = (map fib' [1..])
  where fib' 1 = 1
        fib' 2 = 1
        fib' n = fibs !! (n-2) + fibs !! (n-3)

main = do
  t <- fmap read getLine
  forM [1..t] (\_ -> do
                  n <- fmap read getLine
                  putStrLn $ intercalate " " $ map show (take n fibs))
