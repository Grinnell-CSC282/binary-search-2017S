/**
 * tropsara17.c
 *   Binary search on arrays of integers, implemented by Sarah Trop.
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
// 

int 
binary_search(int val, int* vals, int lo, int hi);

int
search(int val, int* vals, int n) 
{
	return binary_search(val, vals, 0, n);
}

int 
binary_search(int val, int* vals, int lo, int hi)
{
	int mid = (lo + hi) / 2;
	if (lo > hi) {
		return -1;
	}
	else if(vals[mid] == val) {
		return mid;
	} 
	else if (vals[mid] < val) {
		return binary_search(val, vals, mid + 1, hi);
	}
	else if (vals[mid] > val) {
		return binary_search(val, vals, lo, mid - 1);
	}
	return -1;
}