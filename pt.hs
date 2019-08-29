-- pascal triangle in haskell
xq = iterate (\row -> zipWith (+) ([0] ++ row) (row ++ [0])) [1]
