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
  if (val == vals[n/2]){
		return n/2;
	}
	else if (val < vals[n/2]){
		return search_Helper (val, vals, 0, n/2-1);
	}
	else {
		return search_Helper (val, vals, n/2+1, n);
	}
} // search

int 
search_Helper (int val, int *vals, int start, int end){
	if (start == end){
		return -1;
	}
	if (val == vals[end/2]){
		return end/2;
	}
	else if (val < vals[end/2]){
		return search_Helper (val, vals, start, end/2-1);
	}
	else {
		return search_Helper (val, vals, end/2+1, end);
	}
}
