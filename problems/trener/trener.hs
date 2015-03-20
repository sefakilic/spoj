import Control.Monad
import Data.List

trener :: [String] -> String
trener names = sort $ [c | c <- ['a'..'z'],
                       (sum [1 | name <- names, head name == c]) >= 5]

main :: IO ()
main = do
  inp <- getLine
  let n = read inp :: Int
  inp <- replicateM n getLine
  let res = trener $ inp
  if null res then putStrLn "PREDAJA" else putStrLn res
