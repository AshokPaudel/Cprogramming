/*
A Madhav array has the following property.
a[0] = a[1] + a[2] = a[3] + a[4] + a[5] = a[6] + a[7] + a[8] + a[9] = …
The length of a Madhav array must be n*(n+1)/2 for some n.
Write a method named isMadhavArray that returns 1 if its array argument is a Madhav array,
otherwise it returns 0. If you are programming in Java or C# the function signature is
int isMadhavArray(int[ ] a)
If you are programming in C or C++, the function signature is
int isMadhavArray(int a[ ], int len) where len is the number of elements in a.Examples
if a is return reason
{2, 1, 1} 1 2 + 1 + 1
{2, 1, 1, 4, -1, -1} 1 2 = 1 + 1, 2 = 4 + -1 + -1
{6, 2, 4, 2, 2, 2, 1, 5, 0, 0} 1 6 = 2 + 4, 6 = 2 + 2 + 2, 6 = 1 + 5 + 0 + 0
{18, 9, 10, 6, 6, 6} 0 18 != 9 + 10
{-6, -3, -3, 8, -5, -4} 0 -6 != 8 + -5 + -4
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, -2, -
1}
1 0 = 0 + 0, 0 = 0 + 0 + 0, 0 = 0 + 0 + 0 + 0,
0 = 1 + 1 + 1 + -2 + -1
{3, 1, 2, 3, 0} 0 The length of the array is 5, but 5 does not equal n*(n+1)/2 for any value of n.
*/
#include <stdio.h>
int isMadhavArray();

int main() {
    //int a[4]={2, 1, 1};
    int a[10]={6, 2, 4, 2, 2, 2, 1, 5, 0, 0};
    int len=6;
    int isM;
    isM=isMadhavArray(a,len);
    if(isM==0){
      printf("\nThe array is not Madhav Array\n");
    }
    else {
      printf("\n The array is Madhav Array\n");
      }
    printf("Hello, world!");
    return 0;
}

int isMadhavArray(int a[],int len){
   int sum1=a[0];
   int sum2;
  int j=0;
  int terms=0;
  for(int i=1;i<len;i++){
     if ((i+1)*i/2==len){
       terms=i;
       break;
     }
   }
  if (terms==0){
    printf("\nThe length doesn't match conditions\n");
    return 0;
  }
  
   for(int i=0;i<len;i++){
     sum2=0;
     int k;
     printf("\nValue of i at the begining\t%d,j =  %d\n",i,j);
     for(k=0;k<=j;k++){
       sum2+=a[i+k];
       printf("Inner loop sum=%d\n",sum2);
     }
     printf("SUM1 :%d,SUM2:%d ",sum1,sum2);
     printf("\n outer loop: %d inner loop %d\n",i,k);
     if(sum1!=sum2){
       return 0;
     }
     j=k;
     i+=k-1;
   }
  return 1;
  
}