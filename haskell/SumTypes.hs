module SumTypes where
{-
x = (1 * 5 + 4) + 2
y = 6 * 5
z = 6 / 2 + y
sub = 5 - 60
-}
data Expr =
    I Int |
    Var String |
    Add Expr Expr |
    Mul Expr Expr |
    Sub Expr Expr |
    Div Expr Expr