import Control.Monad

divisible3 n = n `rem` 3 == 0

main = do
  inp <- getLine
  forM [1..(read inp :: Int)] (\_ -> do
                                 inp <- getLine
                                 let n = read inp :: Int
                                 putStr $ (show n) ++ " is "
                                 if divisible3 n then putStr "" else putStr "not "
                                 putStrLn "a multiple of 3")
