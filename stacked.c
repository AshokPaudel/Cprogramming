/*
Define a stacked number to be a number that is the sum of the first n positive integers for
some n. The first 5 stacked numbers are
1 = 1
3 = 1 + 2
6 = 1 + 2 + 310 = 1 + 2 + 3+ 4
15 = 1 + 2 + 3 + 4 + 5
Note that from the above we can deduce that 7, 8, and 9 are not stacked numbers because they
cannot be the sum of any sequence of positive integers that start at 1.
Write a function named isStacked that returns 1 if its argument is stacked. Otherwise it returns 0.
Its signature is:
int isStacked(int n);
So for example, isStacked(10) should return 1 and isStacked(7) should return 0
*/
#include <stdio.h>
int isStacked(int n);
int main(){
    int n=55;
    printf("is %d stacked number ?\n Response: %d\n",n,isStacked(n));
    printf("is 15 stacked number ?\n Response: %d\n",isStacked(15));
    printf("is 1 stacked number ?\n Response: %d\n",isStacked(1));
    printf("is 15 stacked number ?\n Response: %d\n",isStacked(15));
    printf("is 22 stacked number ?\n Response: %d\n",isStacked(22));
    printf("is 7 stacked number ?\n Response: %d\n",isStacked(7));
    return 0;
}

int isStacked(int n){
    int sum=0;
    int i=1;
    while(1){
        sum+=i;
        //printf("%d\t",sum);
        if(sum==n){return 1;}
        if(sum>n){return 0;}
        i++;

    }
}
