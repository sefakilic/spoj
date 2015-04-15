main = do
  n <- fmap read getLine
  putStrLn (if n > 0 then "Positivo" else if n < 0 then "Negativo" else "Cero")
