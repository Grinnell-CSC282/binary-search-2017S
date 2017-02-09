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
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// +--------------------+--------------------------------------------
// | Exported Functions |
// +--------------------+

int
search (int val, int *vals, int n)
{
  int i=n/2;
  int lower=0;
  int upper=n-1;
  while (vals[i]!=val && (upper-lower)*(upper-lower)>=1) {
    if (vals[i] > val){
      upper=i-1;
      i=(upper+lower)/2;
    } else {
      lower=i+1;
      i=(upper+lower)/2;
    }
  }
  if (vals[i]!=val){
    return -1;
  }
  return i;
} // search
