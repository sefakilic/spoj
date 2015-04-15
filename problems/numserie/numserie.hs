numserie = 1:2:3:4:zipWith (+) (tail numserie) (drop 3 numserie)

main = do
  mapM print (take 100 numserie)
