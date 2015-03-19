import Data.List
import Control.Monad

combinations :: Int -> [a] -> [[a]]
combinations n all@(x:xs)
  | n > length all = []
  | n == 1         = [[x] | x <- all]
  | otherwise     = map (\acc -> x:acc) accs ++ combinations n xs
  where accs = combinations (n-1) xs

xor :: Bool -> Bool -> Bool
xor True False = True
xor False True = True
xor _ _ = False

exfor :: [Bool] -> Bool
exfor xs = foldl1 xor ([a || b | (a:b:_) <- combinations 2 xs] ++
                       [a || b || c | (a:b:c:_) <- combinations 3 xs])

toBool :: String -> Bool
toBool "0" = False
toBool "1" = True

fromBool :: Bool -> String
fromBool False = "0"
fromBool True = "1"

main = do
  line <- getLine
  let t = read line :: Int
  forM [1..t] (\_ -> do
                 line <- getLine
                 let bools = map toBool (words line)
                 putStrLn $ fromBool $ exfor bools)
  
