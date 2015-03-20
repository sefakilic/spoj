import Data.List

mergeSort :: (Ord a) => [a] -> [a]
mergeSort [] = []
mergeSort [x] = [x]
mergeSort xs = merge (mergeSort left) (mergeSort right)
    where (left, right) = split xs

split :: [a] -> ([a], [a])
split (x:y:zs) = (x:xs, y:ys) where (xs,ys) = split zs
split xs = (xs, [])

merge :: (Ord a) => [a] -> [a] -> [a]
merge xs [] = xs
merge [] ys = ys
merge (x:xs) (y:ys) 
    | x < y     = x: merge xs (y:ys)
    | otherwise = y: merge (x:xs) ys

main = do
  line <- getLine
  let nums = map (\x -> read x :: Int) (words line)
  putStrLn $ intercalate " " (map show $ mergeSort nums)
