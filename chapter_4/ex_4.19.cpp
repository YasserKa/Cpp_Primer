/**
 * (a) ptr != 0 && *ptr++ 
 * (b) ival++ && ival
 * (c) vec[ival++] <= vec[ival]
 * c is likely to be incorrect because the compiler decides which one is evaluated first
 * it can be corrected by not modifying the variable there
 * vec[ival+1] <= vec[ival]
 * ++ival;
 */

