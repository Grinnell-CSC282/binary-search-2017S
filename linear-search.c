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
search (int val, int *vals, int n)
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
