-- return number of 0-, 1- and 2-ending n-words
amzseq :: Int -> [Int]
amzseq 1 = [1, 1, 1]
amzseq n = [a+b, a+b+c, b+c]
    where (a:b:c:_) = amzseq (n-1)

main = do
  n <- fmap read getLine
  putStrLn $ show $ sum (amzseq n)
  
