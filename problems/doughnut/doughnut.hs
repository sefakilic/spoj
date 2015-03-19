import Control.Monad

enoughDoughnut :: Int -> Int -> Int -> String
enoughDoughnut c k w
  | c*w <= k = "yes"
  | otherwise = "no"


main = do
  line <- getLine
  let t = read line :: Int
  forM [1..t] (\_ -> do
                  line <- getLine
                  let c:k:w:_ = map (\x -> read x :: Int) (words line)
                  putStrLn $ enoughDoughnut c k w)
