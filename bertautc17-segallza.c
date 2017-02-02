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
  int max = n;
  int mid = (max - min)/2 + min; 
  while(min < max){
    int cur = vals[mid]; 
    if(cur < val){
      min = mid + 1;
    } else if (cur > val){
      max = mid - 1;
    } else {
      return mid;
    }
     mid = (max - min)/2 + min; 
  }
  return -1;    // STUB
} // search
