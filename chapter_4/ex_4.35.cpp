/**
 * char cval;     int ival;    unsigned int ui;
 * float fval;    double dval;
 * (a) cval = 'a' + 3; a becomes integer
 * (b) fval = ui - ival * 1.0; ival beoems doable, result to unsigned then depends on the size
 * (c) dval = ui * fval; depends on the size 
 * (d) cval = ival + fval + dval; ival to float then result to doable then result to char
 */

