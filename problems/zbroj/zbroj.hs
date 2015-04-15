replace a b cs = [if c == a then b else c | c <- cs]

main = do
  input <- getLine
  let minsum = sum $ map (\wd -> read $ replace '6' '5' wd) (words input)
      maxsum = sum $ map (\wd -> read $ replace '5' '6' wd) (words input)
  putStrLn $ (show minsum) ++ " " ++ (show maxsum)
