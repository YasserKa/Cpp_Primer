/**
 * int i;  double d;  const string *ps;  char *pc;  void *pv;
 * (a) pv = (void*)ps; const_cast<void*> pv
 * (b) i = int(*pc); i = static_cast<int> *pc
 * (c) pv = &d;
 * (d) pc = (char*) pv; pc = static_cast<char*> pv;
 */

