problem1 = sum [perim a a a+1 | a <- [1..350000000], integral_area a (a+1)]
  where perim x y z = x + y + z
        integral_area a c = floor (h*c/2) == ceiling (h*c/2)
          where h = sqrt (a**2 - (c/2)**2)
