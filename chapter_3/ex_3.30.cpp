/**
 * constexpr size_t array_size = 10;
 * int ia[array_size];
 * for (size_t ix = 1; ix <= array_size; ++ix)
 *       ia[ix] = ix;
 * ia[10] is undefined since ia[9] is the last element
 */

