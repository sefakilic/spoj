import Data.List

main = do
  n <- fmap read getLine
  if n == 0
    then return ()
    else do xs <- fmap (map (\x -> read x :: Int) . words) getLine
            print $ last (sort (filter (< (maximum xs)) xs))
            main
