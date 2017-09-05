/**
 * (a) while (string::iterator iter != s.end()) {  . . . }
 * Defining an empty iter and comparing it to an iter of another object
 * can be fixed by assigning iter to s.begin() before the loop then increment it
 * inside the loop or in the expression
 * (b) while (bool status = find(word)) {  . . . }
 * if (!status) { .. }
 * The status is definied in  a scope that the if statement won't reach
 * can be fixed be defining status before the while loop
 * /

