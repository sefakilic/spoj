reverseFactorial n = head [x | x <- [1..], product [1..x] == n]

main = do
  n <- fmap read getLine
  let x = reverseFactorial n
  putStrLn $ show x ++ " " ++ (show $ length (show $ product [1..2*x]))
