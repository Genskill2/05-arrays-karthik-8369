/* Enter your solutions in this file */
#include <stdio.h>
int max(int max[],int a){
  int i;
  for(i=1;i<a;i++){
  max[0]=max[0]>max[i]?(max[0]):(max[i]);
  }
  return max[0];}
int min(int min[],int a){
  int i;
  for(i=1;i<a;i++){
  min[0]=min[0]<min[i]?(min[0]):(min[i]);
  }
  return min[0];}
float average(int avg[],int a){
  int i,d=0;
  for(i=0;i<a;i++){
  d=d+avg[i];
  }
  return d/a;}
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
int factors(int num,int arr[]){
	int prime=2,ref=0;
	int count=0,index=0;
	while(num!=1){
		if(num%prime==0){
			num=num/prime;
			count++;
			arr[index]=prime;
			index++;
		}
		else{
			while(1){
				prime++;
				for(int j=2;j<prime;j++){
					if(prime%j==0)
						ref++;
				}
				if(ref==0){
					break;
				}
				else{
					ref=0;
				}
			}
		}
	}
	return count;
}

