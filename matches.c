/*
A simple pattern match on the elements of an array A can be defined using another array P.
Each element n of P is negative or positive (never zero) and defines the number of elements in a
sequence in A. The first sequence in A starts at A[0] and its length is defined by P[0]. The second
sequence follows the first sequence and its length is defined by P[1] and so on. Furthermore,
for n in P, if n is positive then the sequence of n elements of A must all be positive. Otherwise
the sequence of abs(n) elements must all be negative. The sum of the absolute values of the
elements of P must be the length of A. For example, consider the array
A = {1, 2, 3, -5, -5, 2, 3, 18}
If P = {3, -2, 3} then A matches P because
i. the first 3 elements of A (1, 2, 3) are positive (P[0] is 3 and is positive),
ii. the next 2 elements of A (-5, -5) are negative (P[1] is -2 and is negative)
iii. and the last 3 elements of A (2, 3, 18) are positive (P[2] is 3 and is positive)
Notice that the absolute values of the elements of P sum to 8 which is the length of A. The
array A also matches the following patterns:
{2, 1, -1, -1, 2, 1}, {1, 2, -1, -1, 1, 2}, {2, 1, -2, 3}, {1, 1, 1, -1, -1, 1, 1, 1}In each case the sum of the absolute values is 8, which is the length of A and each sequence of
numbers in A defined in a pattern is negative or positive as required.
The array A = {1, 2, 3, -5, -5, 2, 3, 18} does not match the following patterns:
i. P = {4, -1, 3} (because the first 4 elements of A are not positive (A[3] is negative) as required
by P)
ii. P = {2, -3, 3} (because even though the first 2 elements of A are positive, the next 3 are
required to be negative but A[2] is positive which does not satisfy this requirement.)
iii. P = {8} (because this requires all elements of A to be positive and they are not.)
Please note: Zero is neither positive nor negative.
Write a function named matches which takes arrays A and P as arguments and returns 1
if A matches P. Otherwise it returns 0. You may assume that P is a legal pattern, i.e., the
absolute value of its elements sum to the length of A and it contains no zeros. So do not
write code to check if P is legal!

*/
#include<stdio.h>
#include<math.h>
int matches(int a[],int len, int p[]);
int main(){
    int a[8]= {1, 2, 3, -5, -5, 2, 3, 18};
    int len=8;
    int p[3] = {3, -2, 3};
    printf("matches returned to: %d",matches(a,len,p));
    return 0;
}

int matches(int a[],int len, int p[]){
   int ind=0;
   for(int i=0;i<p[0];i++){
    for(int j=0;j<abs(p[i]);j++){
        printf("i=%d\t,j=%d\t,ind=%d\n",i ,j,ind);
        if(p[i]>0&&a[ind]<0){printf("return at p>0\n");return 0;}
        if(p[i]<0&&a[ind]>0){printf("return at p<0\n");return 0;}
        ind++;

    }
   }
   return 1;
}
