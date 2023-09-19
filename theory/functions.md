# Definition
Basic building block?
No
Used in complex programs?
No

Function is a mathematical term you can look up the definition.
C does not enforce functions (but you can write mathematical functions in C),
that's why c has variables, conditional and looping statements and procedures as the 
only abstractions.

A procedure is a function iff it returns the same value for a given input
every single time. If it does any IO operation then it is not a function
even if it computes the same result for the given input because when the
IO operation fails that failure can be considered as an output but when it
succeeds you get the expected output which is not equal to the failure.