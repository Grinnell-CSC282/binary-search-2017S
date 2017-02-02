/**
 * linear-search.c
 *   A simple linear search algorithm.
 *
 * <insert appropriate FOSS license>
 */

// +---------+-------------------------------------------------------
// | Headers |
// +---------+

#include "search.h"

// +--------------------+--------------------------------------------
// | Exported Functions |
// +--------------------+

int
search_linear (int val, int *vals, int n)
{
  int i;
  for (i = 0; i < n; i++)  
    {
      if (val == vals[i])
        {
          return i;
        } // if
    } // for
  // If we've gotten this far, it's not there.
  return -1;
} // search

int
binary_search(int val, int *vals, int n, int offset)
{
  int midpoint = n / 2;
  if (vals[midpoint] == val) {
    return offset + midpoint;
  } else if (midpoint == 0) {
    return -1;
  } else if (val > vals[midpoint]) {
    return binary_search(val, &vals[midpoint], n-midpoint, midpoint);
  } else {
    return binary_search(val, vals, midpoint, offset);
  }
}

int
search(int val, int *vals, int n) {
  return binary_search(val, vals, n, 0);
}

