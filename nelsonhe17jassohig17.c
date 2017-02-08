#include <stdio.h>
#include <math.h>

// checks if search value was found
int
outcheck (int prev, int val)
{
  if (val == -1)
    return -1;
  else
    return prev + val;
}                               // outcheck

// searches for int val in sorted array vals of length n
int
search (int val, int *vals, int n)
{
  // checks the size of the array
  if (n < 2)
    {
      // checks if size of array is 1
      if (n == 1)
        {
          if (vals[0] == val)
            return 0;
          else
            return -1;
        }
      else
        return -1;
    }                           // if (outermost)
  else
    {
      int halfint = (int) floor (((double) n) / 2);     // half array length

      // recursively calls on proper half of array
      if (vals[halfint] > val)
        return search (val, vals, halfint);
      else if (vals[halfint] < val)
        return outcheck (halfint, search (val, &vals[halfint], halfint + 1));
      else
        return halfint;
    }                           // else
}                               // search
