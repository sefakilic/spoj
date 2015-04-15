import Data.Char

main = do
  digits <- getLine
  print $ sum [product [1..digitToInt x] | x <- digits]
