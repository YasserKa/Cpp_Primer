/**
 * int a = 3, b = 4;
 * decltype(a) c = a;
 * decltype((b)) d = a;
 * ++c;
 * ++d;
 * c is int with 4
 * d is ref to a with 5
 */
