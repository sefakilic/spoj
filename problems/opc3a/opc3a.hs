import Data.List
import Control.Monad


g = 1 : 1 : 2 : 4 : zipWith (\x y -> mod (x*y) (10^9+7)) (drop 2 g) (drop 3 g)

main = do
  t <- fmap read getLine
  forM [1..t] (\_ -> do
                 n <- fmap read getLine
                 putStrLn $ show $ g !! n)


