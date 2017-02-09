
/**
 * Bourgeoi1.c
 *   A simple binary search algorithm.
 *
 */

// +---------+-------------------------------------------------------
// | Headers |
// +---------+

#include "search.h"
#include <stdio.h>


// +--------------------+--------------------------------------------
// | Exported Functions |
// +--------------------+
int
search (int val, int *vals, int n)
{
  int i = n/2;
  int l = -1;
  int h = n;
  while(i != h && i != l){
    if(vals[i] == val){
      return i;
    } else if (vals[i] > val){
      h = i;
      i = (l + i)/2;
    } else {
      l = i;
      i = (i+h)/2;
    }
  }
  return -1;
}