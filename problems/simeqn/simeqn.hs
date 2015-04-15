howmany n a b c = sum [1 | x <- [0..a], y <- [0..b], z <- [0..c], x+y+z <= n]
