#include <stdio.h>
#include <math.h>

int
outcheck (int prev, int val)
{
  if (val == -1)
    return -1;
  else
    return prev+val;
}

int
search (int val, int *vals, int n)
{
  if (n < 2)
    {
      if (n == 1)
        {
          if (vals[0] == val)
            return 0;
          else
            return -1;
        }
      else
        return -1;
    }
  else
    {
      int halfint = (int) floor (((double) n)/2);
  
      if (vals[halfint] > val)
        return search (val,vals,halfint);
      else if (vals[halfint] < val)
        return outcheck (halfint, search (val, &vals[halfint], halfint+1));
      else
        return halfint;
    }
}
