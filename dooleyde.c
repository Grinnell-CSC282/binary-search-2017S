#include "search.h"

int
search (int val, int *vals, int n) {
  int n2 = n/2;
  if (vals[n2] > val) {
    search(val, vals, n2);
  } else if (vals[n2] < val) {
    search(val, vals, n + n2);
  } else {
    return n2; 
  }
  return -1;
}
