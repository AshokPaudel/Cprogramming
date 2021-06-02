#include <stdio.h>
#include <stdlib.h>
int minDistance(int n);
int main() {
    printf("Hello, world!");
    int n=13013;
    int minD;
    minD=minDistance(n);
    return 0;
}
int minDistance(int n){
  //int  na[15];
   int factors=0;
   for (int i=1;i<=n/2;i++){
	   if  (i%2==0){
		   factors++;
	   }
     }
	 
	 int * na =(int *) malloc(sizeof(int)*factors); 
	 
    int i=1;
    int k=0;
    while (i<=n/2){
      if (n%i==0){
        printf("i,k are: %d\t%d\n",i,k);
        na[k]=i;
        printf("first factor is %d\n",na[k]);        
        k++;        
      }
      i++;
    }
  printf("number of multiplier=%d\n first element i %d\n",k,na[0]);
  for (int j=0;j<k;j++){
    printf("%d\t",na[j]);
  }
// Minumum distance

  int minDist=na[1]-na[0];
  for (int i=1;i<k;i++){
    if (minDist>na[i]-na[i-1]){
      minDist=na[i]-na[i-1];
    }
  }
  printf(" Min Distance is %d",minDist);
  return minDist;  
}
