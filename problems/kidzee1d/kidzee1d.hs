import Control.Monad

grade n
  | n>=80 = "A+"
  | n>=75 = "A"
  | n>=70 = "A-"
  | n>=65 = "B+"
  | n>=60 = "B"
  | n>=55 = "B-"
  | n>=50 = "C"
  | n>=45 = "D"
  | otherwise = "F"

main = do
  n <- fmap read getLine
  forM [1..n] (\x -> do
                  g <- fmap read getLine
                  putStrLn $ "Case " ++ show x ++ ": " ++ grade g)
