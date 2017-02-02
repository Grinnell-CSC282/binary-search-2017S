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
  int min = 0;
  int max = n-1;
  int i = (max+min)/2;
  int cur_val = vals[i]
  while(cur_val != val && (max-min) > 1 )
    {
      if(cur_val > val)
        {
          min = i;
        }
      if(cur_val < val)
        {
          max = i;
        }
      i = (max+min)/2;
      cur_val = vals[i];
    }
  if(cur_val == val)
    {
      return i;
    }
  if(vals[i+1] == val)
    {
      return i+1;
    }
  // If we've gotten this far, it's not there.
  return -1;
} // search
