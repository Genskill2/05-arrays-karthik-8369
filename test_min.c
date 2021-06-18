#include <stdio.h>
#include <assert.h>


int min(int [], int);

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (min(x, 7) == -3);

  int y[] = {5};
  assert (min(y, 1) == 5);
  printf("Min: passed\n");
  }
int min(int min[],int a){
  int i;
  for(i=1;i<a;i++){
  min[0]=min[0]<min[i]?(min[0]):(min[i]);
  }
  return min[0];}
