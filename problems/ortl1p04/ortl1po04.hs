main = do
  xs <- fmap (map read . words) getLine
  let avg = sum xs `div` length xs
  print avg
  putStrLn (if avg >= 6 then "APROBADO" else "DESAPROBADO")
  
  
