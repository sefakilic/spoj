import Control.Monad
import Data.List

looksay :: String -> String
looksay xs = foldl1 (++) [show (length grp) ++ [head grp]| grp <- group xs]

main = do
  inp <- getLine
  let t = (read inp) :: Int
  res <- forM [1..t] (\_ -> do
                        line <- getLine
                        return (looksay line))
  mapM putStrLn res
                 
