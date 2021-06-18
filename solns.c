/* Enter your solutions in this file */
#include <stdio.h>
#include <assert.h>


int mode(int [], int);

int main(void) {
  int x[] = {4, 9,5,6,5,10,0,2,-3, -3,4, 4};
  assert ((mode(x, 12) == 4));

  int y[] = {5};
  assert (mode(y, 1) == 5);
  printf("Mode: passed\n");
  }
  int mode(int mode[],int a){
  int maxValue = 0, max = 0, i, j;

   for (i = 0; i < a; ++i) {
      int count = 0;
      
      for (j = 0; j < a; ++j) {
         if (mode[j] == mode[i])
         ++count;
      }
      
      if (count > max) {
         max = count;
         maxValue = mode[i];
      }
   }

   return maxValue;
}



int max(int [], int);

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (max(x, 7) == 10);

  int y[] = {5};
  assert (max(y, 1) == 5);
  printf("Max: passed\n");
  }
  int max(int max[],int a){
  int i;
  for(i=1;i<a;i++){
  max[0]=max[0]>max[i]?(max[0]):(max[i]);
  }
  return max[0];}
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
