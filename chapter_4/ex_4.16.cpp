/**
 * (a) if (p = getPtr() != 0) 
 * != got higher preced. so it's gonna get evaluated first then
 * assign the result of that to p
 * It can be fixed by grouping p = getPtr()
 * (b) if (i = 1024)
 * Assuming the programmer wanted to compare i with 1024 then it's wrong since = is used 
 * for assigning.
 * It can be fixed by substituting = by ==
 */

