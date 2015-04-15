import Data.List

main = do
  n <- fmap read getLine
  words <- sequence $ replicate n getLine
  mapM putStrLn (sort words)
