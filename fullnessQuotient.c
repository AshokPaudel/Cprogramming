/*
Define the fullness quotient of an integer n > 0 to be the number of representations of n in
bases 2 through 9 that have no zeroes anywhere after the most significant digit. For example, to
see why the fullness quotient of 94 is 6 examine the following table which shows the
representations of 94 in bases 2 through 9.
Notice that the representations of 94 in base 2 and 3 both have 0s somewhere after the most
significant digit, but the representations in bases 4, 5, 6, 7, 8, 9 do not. Since there are 6 such
representations, the fullness quotient of 94 is 6.
Write a method named fullnessQuotient that returns the fullness quotient of its argument. If the
argument is less than 1 return -1. Its signature is
int fullnessQuotient(int n)
Hint: use modulo and integer arithmetic to convert n to its various representations
Examples:
if n isreturnBecause
1 8
Because all of its representations do not have a 0 anywhere after the most
significant digit:
2: 2, 3: 3, 4: 4, 5: 5, 6: 6, 7: 7, 8: 8, 9: 9
9 5 Because 5 of the representations (4, 5, 6, 7, 8) do not have a 0 anywhere after
baserepresentation of
94 because
2 1011110 26 + 24 + 23 + 22 + 21 =
94
3 10111 34 + 32 + 31 + 30 = 94
4 1132 43 + 42 + 3*41 + 2*40 =
94
5 334 3*52 + 3*51 + 4*40 = 94
6 234 2*62 + 3*61 + 4*60 = 94
7 163 1*72 + 6*71 + 3*70 = 94
8 136 1*82 + 3*81 + 6*80 = 94
9 114 1*92 + 1*91 + 4*90 = 94the most significant digit:
2: 1001, 3: 100, 4: 21, 5: 14, 6: 13, 7: 12, 8: 11, 9: 10
360 0
All its representations have a 0 somewhere after the most significant digit:
2: 101101000, 3: 111100, 4: 11220, 5: 2420, 6: 1400,
7: 1023,8: 550, 9: 440
-4 -1 The argument must be > 0

*/
#include<stdio.h>
#include<math.h>
int isExist(int num);
int numConvert(int num,int base);
int fullnessQuotient(int n);
int main(){
    //printf("%d\n",fullnessQuotient(1));
    printf("\nNumber of fullnessQuotient is \t %d\n\n",fullnessQuotient(94));
    printf("\nNumber of fullnessQuotient is \t %d\n\n",fullnessQuotient(9));
    printf("\nNumber of fullnessQuotient is \t %d\n\n",fullnessQuotient(360));
    printf("\nNumber of fullnessQuotient is \t %d\n\n",fullnessQuotient(-4));
}
int isExist(int num){
    int digit=0;
    while(1){
        if(num%10==digit){return 1;}
        num=num/10;
        if(num==0){return 0;}
        //printf("At isExist\n");
    }
}
int numConvert(int num,int base){
    int output=0;
    int i=0;
    printf("num= %d\t",num);
    while(1){
        if(num==0){break;}
        output+=(num%base)*pow(10,i);
        //printf("Output=%d\n",output);
        num=num/base;
        i++;
    }
    printf("converted to base %d =%d\n", base,output);
    return output;
}

int fullnessQuotient(int n){
    int conv;
    int count;
    if(n<1){return -1;}
    for(int i=2;i<=9;i++){
        conv=numConvert(n,i);
        //printf("At fullnessQuotient");
        if(isExist(conv)){continue;}
        count++;
    }
    return count;
}
