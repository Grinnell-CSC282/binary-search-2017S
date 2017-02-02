#include <stdio.h>
#include <math.h>

int outcheck(int prev, int val){
  if (val==-1)
    return -1;
  else
    return prev+val;
}

int search (int val, int *vals, int n){
  if (n==1){
    if (vals[0]==val)
      return 0;
    else
      return -1;
  }
  //printf("Got to search\n");
  int halfint = (int) floor(((double) n)/2);
  //printf("Done halfint\n");
  if (vals[halfint]>val){
    printf("Done comp %d\n",vals[halfint]);
    return search(val,vals,halfint);
  }else if (vals[halfint]<val){
    printf("Done comp2 %d\n",vals[halfint]);
    return outcheck(halfint,search(val,&vals[halfint],halfint+1));
  }else{
    return halfint;
  }
}
