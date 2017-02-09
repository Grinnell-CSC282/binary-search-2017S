#include "search.h"

int
search (int val, int *vals, int n)
{
  if (vals[n - 1] == val)
  {
    return n - 1; 
  }
  else if (vals[0] == val)
  {
    return 0;
  }
  else 
  {
    return search_Helper (val, vals, 0, n - 1);
  }
}

int
search_Helper (int val, int *vals, int start, int end)
{
  if (start > end)
  { 
    return -1;
  }

  int mid = (start + end) / 2;

  if (vals[mid] > val)
  {
    return search_Helper (val, vals, start, mid - 1); 
  }
  else if (vals[mid] < val)
  {
    return search_Helper (val, vals, mid + 1, end); 
  }
  else
  {
    return mid;
  }

  return -1;
}
