import Control.Monad
import Data.List

removeSpace xs = filter (/= ' ') xs

numUnique xs =  length $ filter (\x -> length x == 1) $ group (sort xs)

main = do
  t <- fmap read getLine
  forM [1..t] (\_ -> do
                  n <- fmap read getLine
                  strings <- sequence $ take n $ repeat (fmap removeSpace getLine)
                  putStrLn $ show $ numUnique strings)
