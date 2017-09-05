/**
 * (a) int ix;
 * for (ix = 0; ix != sz; ++ix)  {  . . .  }
 * if (ix != sz)
 *      // . . .
 * 
 * (b) int ix;
 * for (;ix != sz; ++ix) {  . . .  }
 * (c) for (int ix = 0; ix != sz; ++ix, ++ sz)  {  . . .  }
 * the problem is that ix != sz will not happen since sz and ix will increase
 * at the same time
 */

