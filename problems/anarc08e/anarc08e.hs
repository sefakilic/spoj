import Control.Monad

choose :: Int -> Int -> Int
choose n k = product [1..n] `div` product [1..k] `div` product [1..(n-k)]

main = do
  line <- getLine
  let a:b:_ = map (\x -> read x :: Int) $ words line
  when (a /= -1 && b /= -1) $ do
    putStr ((show a) ++ "+" ++ (show b))
    if a+b == choose (a+b) a
      then putStr "="
      else putStr "!="
    putStrLn $ show (a+b)
    main
     

  
