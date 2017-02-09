/**
 * swoaprac.c
 *   Binary search on arrays of integers, implemented by Swoap.
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


int search_helper (int val, int *vals, int lo, int hi) {

  int middle = lo + (hi+lo)/2;
  int cur = vals[middle];

  if(cur == val) {
    return middle;
  }
  if (cur < val) {
    lo = middle +1;
  }
  if (cur > val) {
    hi = middle -1;
  }
  return -1;
}

int binary_search(int val, int *vals, int n) {
  int hi = n;
  int lo = 0;
  search_helper (val, vals, lo, hi);
  return -1;
}


