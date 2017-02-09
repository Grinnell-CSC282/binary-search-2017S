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
  int low = 0;                        // The lower bound
  int high = n - 1;                   // The higher bound
  int mid = 0;
  // Check the array until high and low are consecutive integers
  while ((high - low) > 1)
    {
      mid = (high + low) / 2;
      // In case x is in the right side of our bound
      if (arr[mid] <= x)
        {
          low = mid;
        }
      // In case x is in the left side of our bound
      else
        {
          high = mid - 1;
        }
    }
  // Return low if that is the number we are looking for
  if (arr[low] == x)
    {
      return low;
    }
  // Return high if that is the number we are looking for
  else if (arr[high] == x)
    {
      return high;
    }
  // Return -1 if x is not found
  else
    {
      return -1;
    }
}
