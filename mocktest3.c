/*

1. Write a method named computeHMS that computes the number of hours, minutes and
seconds in a given number of seconds.
If you are programming in Java or C#, the method signature is
int[] computeHMS(int seconds);
If you are programming in C or C++, the method signature is
int * computeHMS(int seconds);
The returned array has 3 elements; arr[0] is the hours, arr[1] is the minutes and arr[2] is the
seconds contained within the seconds argument.Recall that there are 3600 seconds in an hour and 60 seconds in a minute. You may assume that
the numbers of seconds is non-negative.
Examples
If seconds
is
then function
returns reason
3735 {1, 2, 15} because 3735 = 1*3600 + 2*60 +15. In other words, 3,735 is the
number of seconds in 1 hour 2 minutes and 15 seconds
380 {0, 6, 20} because 380 = 0*3600 + 6*60 + 20
3650 {1, 0, 50} because 3650 = 1*3600 + 0*60 + 50
55 {0, 0, 55} because 55 = 0*3600 + 0*60 + 55
0 {0, 0, 0} because 0 = 0*3600 + 0*60 + 0
2. Define an array to be a Martian array if the number of 1s is greater than the number of 2s
and no two adjacent elements are equal. Write a function named isMartian that returns 1 if its
argument is a Martian array; otherwise it returns 0.
If you are programming in Java or C#, the function signature is
int isMartian(int[ ] a)
If you are programming in C or C++, the function signature is
int isMartian(int a[ ], int len) where len is the number of elements in the array a.
There are two additional requirements.
1. You should return 0 as soon as it is known that the array is not a Martian array; continuing to
analyze the array would be a waste of CPU cycles.
2. There should be exactly one loop in your solution.
Examples
a is then function
returns reason
{1, 3} 1
There is one 1 and zero 2s, hence the number of
1s is greater than the number of 2s. Also, no
adjacent elements have the same value (1 does not
equal 3)
{1, 2, 1, 2, 1, 2, 1,
2, 1} 1
There are five 1s and four 2s, hence the number of
1s is greater than the number of 2s. Also, no two
adjacent elements have the same value.{1, 3, 2} 0 There is one 1 and one 2, hence the number of 1s
is not greater than the number of 2s.
{1, 3, 2, 2, 1, 5, 1,
5} 0 There are two 2s adjacent to each other.
{1, 2, -18, -18, 1,
2} 0
The two -18s are adjacent to one another. Note
that the number of 1s is not greater than than the
number of 2s but your method should return 0
before determining that! (See the additional
requirements above.)
{} 0 There are zero 1s and zero 2s hence the number of
1s is not greater than the number of 2s.
{1} 1
There is one 1 and zero 2s hence the number of 1s
is greater than the number of 2s. Also since there
is only one element, there cannot be adjacent
elements with the same value.
{2} 0 There are zero 1s and one 2 hence the number of
1s is not greater than the number of 2s.
Hint: Make sure that your solution does not exceed the boundaries of the array!
3. An array is defined to be paired-N if it contains two distinct elements that sum to N for some
specified value of N and the indexes of those elements also sum to N. Write a function named
isPairedN that returns 1 if its array parameter is a paired-N array, otherwise it returns 0. The
value of N is passed as the second parameter.
If you are writing in Java or C#, the function signature is
int isPairedN(int[ ] a, int n)
If you are writing in C or C++, the function signature is
int isPairedN(int a[ ], int n, int len) where len is the length of a
There are two additional requirements.
1. Once you know the array is paired-N, you should return 1. No wasted loop iterations please.
2. Do not enter the loop unless you have to. You should test the length of the array and the value
of n to determine whether the array could possibly be a paired-N array. If the tests indicate no,
return 0 before entering the loop.
Examples
if a is and n is return reason{1, 4, 1, 4, 5, 6} 5 1
because a[2] + a[3] == 5 and 2+3==5. In
other words, the sum of the values is equal
to the sum of the corresponding indexes and
both are equal to n (5 in this case).
{1, 4, 1, 4, 5, 6} 6 1 because a[2] + a[4] == 6 and 2+4==6
{0, 1, 2, 3, 4, 5, 6, 7,
8} 6 1 because a[1]+a[5]==6 and 1+5==6
{1, 4, 1} 5 0 because although a[0] + a[1] == 5, 0+1 != 5;
and although a[1]+a[2]==5, 1+2 != 5
{8, 8, 8, 8, 7, 7, 7} 15 0
because there are several ways to get the
values to sum to 15 but there is no way to
get the corresponding indexes to sum to 15.
{8, -8, 8, 8, 7, 7, -7} -15 0 because although a[1]+a[6]==-15, 1+6!=-15
{3} 3 0 because the array has only one element
{} 0 0 because the array has no elements
*/
#include<stdio.h>
int * computeHMS(int seconds);
int isMartian(int a[],int len);
int isPairedN(int a[],int n,int len);

int main(){

    printf(" is HMS of 3735, expected output, 1,2,15\n",computeHMS(3735));
    printf(" is HMS of 3650, expected output, 1,0,50\n",computeHMS(3650));
    printf(" is HMS of 0, expected output, 0,0,0\n",computeHMS(0));
    printf("\n");
    int a1[2]={1, 3};
    int a2[9]={1, 2, 1, 2, 1, 2, 1,2, 1};
    int a3[3]={1, 3,2};
    int a4[6]={1, 2, -18, -18, 1,2};
    int a5[6]={1, 4, 1, 4, 5, 6};
    int a6[9]={0, 1, 2, 3, 4, 5, 6, 7,8};
    int a7[3]={1, 4, 1};
    printf("\n is Martian {1, 3}, expected output 1, real output: %d",isMartian(a1,2));
    printf("\n is Martian {1, 2, 1, 2, 1, 2, 1,2, 1}, expected output 1, real output: %d",isMartian(a2,9));
    printf("\n is Martian {1, 3,2}, expected output 0, real output: %d",isMartian(a3,3));
    printf("\n is Martian {1, 2, -18, -18, 1,2}, expected output 0, real output: %d",isMartian(a4,6));

    printf("\n");

    printf("\n is paired n {1, 4, 1, 4, 5, 6},expected output 1, real output: %d ",isPairedN(a5,5,6));
    printf("\n is paired n {1, 4, 1, 4, 5, 6},expected output 1, real output: %d ",isPairedN(a5,6,6));
    printf("\n is paired n {0, 1, 2, 3, 4, 5, 6, 7,8},expected output 1, real output: %d ",isPairedN(a6,6,9));
    printf("\n is paired n {1, 4, 1},expected output 0, real output: %d ",isPairedN(a7,5,3));


    return 0;
}

int * computeHMS(int s){
    int arr[3]={0,0,0};
    arr[0]=s/3600;
    arr[1]=(s-arr[0]*3600)/60;
    arr[2]=s-arr[0]*3600-arr[1]*60;

    for(int i=0;i<3;i++){
        printf("%d ",arr[i]);
    }
    return arr;
}
int isMartian(int a[],int len){
    int one=0;
    int two=0;
    for(int i=0;i<len;i++){
        if(a[i]==1){one++;}
        if(a[i]==2){two++;}
        if(i==0){continue;}
        else{
            if(a[i]==a[i-1]){return 0;}
        }

    }
    if(one>two){return 1;}
    return 0;
}
int isPairedN(int a[],int n,int len){
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if((i+j==(a[i]+a[j]))&&((i+j)==n)){
                return 1;
            }
        }
    }
    return 0;
}


