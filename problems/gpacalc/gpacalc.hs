import Control.Monad
import Text.Printf

type Grade = (Int, Char) 

readInt :: IO Int
readInt = do
  line <- getLine
  return (read line :: Int)

readInts :: IO [Int]
readInts = do
  line <- getLine
  return (map (\x -> read x :: Int) (words line))

gpa :: [Grade] -> Float
gpa grades = (sum [fromIntegral cr * (aux gr) | (cr, gr) <- grades] / 
              fromIntegral (sum [cr | (cr,_) <- grades]))
    where aux 'S' = 10
          aux 'A' = 9
          aux 'B' = 8
          aux 'C' = 7
          aux 'D' = 6
          aux 'E' = 5

main = do
  t <- readInt
  forM [1..t] (\_ -> do
                 n <- readInt
                 lines <- replicateM n getLine
                 let allgrades = map (\x -> let wds = words x in (read $ head wds :: Int, head (last wds))) lines
                 putStrLn $ printf "%.2f" (gpa allgrades))
                 
                 
  
  
