/*Program to search a a sorted array for a number, and return the location
*     of that number.
* program will use only one if statement in the loop.
* will return -1 if the number is not found.
*/
#include "search.h"
#include <stdio.h>


int
search (int x, int arr[], int n)
{
  int low = 0;
  int high = n - 1;
  int mid = 0;
  while ((high - low) > 1)
  {
    mid = (high + low) / 2;
    if (arr[mid] <= x)
    {
      low = mid;
    }
    else
    {
      high = mid - 1;
    }
  }
  if (arr[low] == x)
  {
    return low;
  }
  else if (arr[high] == x)
  {
    return high;
  }
  else
  {
    return -1;
  }
}
