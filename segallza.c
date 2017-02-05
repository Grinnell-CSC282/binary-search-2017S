/**
 * USERID.c
 *   Binary search on arrays of integers, implemented by YOUR NAME.
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
  int max = n - 1;
  while(min <= max)
    {
      int mid = (max - min)/2 + min; 
      int cur = vals[mid];
      
      if(val <= cur && val >= cur)
        return mid;
      else if (val >= cur)
        min = mid + 1;
      else 
        max = mid - 1;
    }

  return -1;    // STUB
} // search
