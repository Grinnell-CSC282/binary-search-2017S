/**
 * linear-search.c
 *   A simple linear search algorithm.
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
search_linear (int val, int *vals, int n)
{
  int i;
  for (i = 0; i < n; i++)  
    {
      if (val == vals[i])
        {
          return i;
        } // if
    } // for
  // If we've gotten this far, it's not there.
  return -1;
} // search


//recursive search
int 
binary_search_reb (int val, int *vals, int low, int high)
{
  //intialize important values
  int mid = (high+low)/2;
  int curval = vals[mid];
  //if we found the value, return index
  if (curval == val)
  {
    return mid;
  }
  //if not, make sure we don't end up in a loop
  if (mid == low)
  {
    if (vals[high] == val)
    {
      return high;
    }
    else
    {
      return -1;
    }
  }
  //Otherwise, find the new interval
  if (curval < val)
  {
    high = mid;
    binary_search_reb (val, vals, low, high);
  }
  if (curval > val)
  {
    low = mid;
    binary_search_reb (val, vals, low, high);
  }
//If we make it this far, it doesn't exist.
  return -1;
}

int
binary_search (int val, int *vals, int n)
{
  int high = n-1;
  int low = 0;
  binary_search_reb (val, vals, low, high);
  return -1;
}