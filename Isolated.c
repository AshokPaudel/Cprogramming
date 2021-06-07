/*
Define a positive number to be isolated if none of the digits in its square are in its cube. For
example 163 is n isolated number because 69*69 = 26569 and 69*69*69 = 4330747 and the
square does not contain any of the digits 0, 3, 4 and 7 which are the digits used in the cube. On
the other hand 162 is not an isolated number because 162*162=26244 and 162*162*162
= 4251528 and the digits 2 and 4 which appear in the square are also in the cube.Write a function named isIsolated that returns 1 if its argument is an isolated number, it returns
0 if its not an isolated number and it returns -1 if it cannot determine whether it is isolated or not
(see the note below). The function signature is:
int isIsolated(long n)
Note that the type of the input parameter is long. The maximum positive number that can be
represented as a long is 63 bits long. This allows us to test numbers up to 2,097,151 because the
cube of 2,097,151 can be represented as a long. However, the cube of 2,097,152 requires more
than 63 bits to represent it and hence cannot be computed without extra effort. Therefore, your
function should test if n is larger than 2,097,151 and return -1 if it is. If n is less than 1 your
function should also return -1.
Hint: n % 10 is the rightmost digit of n, n = n/10 shifts the digits of n one place to the right.
The first 10 isolated numbers are
N n*n n*n*n
2 4 8
3 9 27
8 64 512
9 81 729
14 196 2744
24 576 13824
28 784 21952
34 1156 39304
58 3364 195112
63 3969 250047
*/
#include<stdio.h>
int isIsolated(long n);
int isExist(long num,int digit);
int main(){
    printf("\n 2 is isolated or not   \t %d",isIsolated(2));
    printf("\n 3 is isolated or not   \t %d",isIsolated(3));
    printf("\n 4 is isolated or not   \t %d",isIsolated(4));
    printf("\n 5 is isolated or not   \t %d",isIsolated(5));
    printf("\n 6 is isolated or not   \t %d",isIsolated(6));
    printf("\n 7 is isolated or not   \t %d",isIsolated(7));
    printf("\n 163 is isolated or not \t %d",isIsolated(163));


    return 0;
}
int isExist(long num,int digit){
    while(1){
        if(num%10==digit){return 1;}
        if(num/10==0){return 0;}
        num=num/10;
    }
}
int isIsolated(long n){
    long sq=n*n;
    long cube=sq*n;
    int rem;
    while (1){
        rem=sq%10;
        if(isExist(cube,rem)){return 0;}
        sq=sq/10;
        if(sq==0){return 1;}
    }
}
