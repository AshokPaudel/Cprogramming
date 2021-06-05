/*
An array can hold the digits of a number. For example the digits of the number 32053 are
stored in the array {3, 2, 0, 5, 3}. Write a method call repsEqual that takes an array and an
integer and returns 1 if the array contains only the digits of the number in the same order that
they appear in the number. Otherwise it returns 0.
If you are programming in Java or C#, the function prototype is
int repsEqual(int[ ] a, int n)
If you are programming in C++ or C, the function prototype is
int repsEqual(int a[ ], int len, int n) where len is the number of elements in the array.
Examples (note: your program must work for all values of a and n, not just those given here!)
if a is         and n   is return       reason
{3, 2, 0, 5, 3} 32053 1 the array contains only the digits of the number, in the same order as they are in the number.
{3, 2, 0, 5} 32053 0 the last digit of the number is missing from the array.
{3, 2, 0, 5, 3, 4} 32053 0 an extra number (4) is in the array.
{2, 3, 0, 5, 3} 32053 0 the array elements are not in the same
order as the digits of the number
{9, 3, 1, 1, 2} 32053 0 elements in array are not equal to digits
of number.
{0, 3, 2, 0, 5, 3} 32053 1 you can ignore leading zeroes.
*/
#include <stdio.h>
int repsEqual(int a[],int len,int n);
int main(){
    int a1[5]={3, 2, 0, 5, 3};
    int n1= 32053;
    int a2[4]= {3, 2, 0, 5};
    int len1=5;
    int len2=4;
    int len3=6;
    int a3[6]={3, 2, 0, 5, 3, 4};
    int a4[5]={9, 3, 1, 1, 2};
    int a5[6]={0, 3, 2, 0, 5, 3};

    printf("\n a1, n1 returned to %d\n",repsEqual(a1,len1,n1));
    printf("\n a2, n2 returned to %d\n",repsEqual(a2,len2,n1));
    printf("\n a3, n3 returned to %d\n",repsEqual(a3,len3,n1));
    printf("\n a4, n4 returned to %d\n",repsEqual(a4,len1,n1));
    printf("\n a5, n5 returned to %d\n",repsEqual(a5,len3,n1));
    return 0;

}

int repsEqual(int a[], int len, int n){
    for(int i=0;i<len;i++){
        if(n%10==a[len-1-i]){
            n=n/10;
        }
        else{
            return 0;
        }
    }
    return 1;

}
