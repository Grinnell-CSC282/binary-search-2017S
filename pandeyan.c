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
search (int value, int *vals, int length)
{
  int high = length - 1, low = 0, mid, current;
  while (high >= low) {
    mid = (high + low) / 2;
    current = vals[mid];
    if (current == value)
      return mid;
    else if (current < value)
      low  = mid + 1;
    else if (current > value)
      high = mid - 1;
  }
  return -1;
}
