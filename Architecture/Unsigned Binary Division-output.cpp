  A    Q    M   Action
0000 1111 0010
-------------------------
0001 1110 0010  Shift
1111            Subtract
0001 1110 0010  Restore, Set Q[0] <- 0
-------------------------
0011 1100 0010  Shift
0001            Subtract
0001 1101 0010  Subtract, Set Q[0] <- 1
-------------------------
0011 1010 0010  Shift
0001            Subtract
0001 1011 0010  Subtract, Set Q[0] <- 1
-------------------------
0011 0110 0010  Shift
0001            Subtract
0001 0111 0010  Subtract, Set Q[0] <- 1
-------------------------
Remainder : 1
Quotient : 7
