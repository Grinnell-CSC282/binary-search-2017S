#ifndef __SEARCH_H__
#define __SEARCH_H__

/**
 * search.h
 *   Declarations for a simple search in ordered arrays.
 *
 * <insert appropriate FOSS license>
 */

/**
 * Given a value, val, and an array of n integers, arranged in strict 
 * increasing order, find the index of val.  If val does not appear
 * in the array, return -1.
 */
int
search (int val, int *vals, int n);

int
search_Helper (int val, int *vals, int start, int end);



#endif // __SEARCH_H__
