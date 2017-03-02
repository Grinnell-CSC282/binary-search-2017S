/**
 * bertautc17.c
 *   Binary search on arrays of integers, implemented by Clara Bertaut.
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

int search(int val, int arr[], int arrlen) {
  int lb = 0;
  int ub = arrlen;
  int mid;

  while(lb <= ub) {
    mid = ((ub - lb) / 2) + lb;
    
    if(arr[mid] == val) {
      return mid;
    }
    else if(arr[mid] > val) {
      ub = mid - 1;
    }
    else {
      lb = mid + 1;
    }
  }
  return -1;
}
