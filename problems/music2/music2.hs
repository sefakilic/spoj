import qualified Data.Map as Map
import Control.Monad

scaleNotes = [("A#", "Bb"),
              ("C#", "Db"),
              ("D#", "Eb"),
              ("F#", "Gb"),
              ("G#", "Ab")]

notesMap = Map.fromList (scaleNotes ++ map (\(a,b) -> (b,a)) scaleNotes)
  
music :: String -> String
music str = let (note:tonality:_) = words str
            in case Map.lookup note notesMap of
              Nothing -> "UNIQUE"
              Just v  -> v ++ " " ++ tonality
               

main = do
  notes <- fmap lines getContents
  let n = length notes
  forM [1..n] (\x -> do
                  putStrLn $ "Case " ++ show x ++ ": " ++ music ( notes!!(x-1)))
