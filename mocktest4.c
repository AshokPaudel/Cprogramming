/*
{1} 1 because 1 is a sequence from 1 to 1 and is the
only sequence.
{1, 2, 1, 2, 3} 0 because it is missing the sequence from 1 to 1.
{1, 1, 3} 0 because {1, 3} is not a sequence from 1 to n for
any n.
{1, 2, 1, 2, 1, 2} 0 because it contains more than one sequence from
1 to 2.
{1, 2, 3, 1, 2, 1} 0
because it is “backwards”, i.e., the sequences
from 1 to n are not ordered by increasing value of
n
{1, 1, 2, 3}
*/
#include<stdio.h>

int isSystematicallyIncreasing(int a[],int len);
int factorial(int n);
int checkPrime(int n);
int isFactorialPrime(int n);
int largestDifferenceOfEven(int a[],int len);
int main(){
    int a1[1]={1};
    int a2[5]={1, 2, 1, 2, 3};
    int a3[3]={1, 1, 3};
    int a4[6]={1, 2, 1, 2, 1, 2};
    int a5[6]={1, 2, 3, 1, 2, 1} ;
    int a6[4]={1, 1, 2, 3};
    int a7[9]={1, 2, 1, 2, 1, 4, 1, 6, 4};
    int a8[5]={1, 18, 5, 7, 33};

    printf("\n isSystematicallyIncreasing a1 expected 1, outcome: %d\n",isSystematicallyIncreasing(a1,1));
    /*printf("\n isSystematicallyIncreasing a2 expected 0, outcome: %d",isSystematicallyIncreasing(a2,5));
    printf("\n isSystematicallyIncreasing a3 expected 0, outcome: %d",isSystematicallyIncreasing(a3,3));
    printf("\n isSystematicallyIncreasing a4 expected 0, outcome: %d",isSystematicallyIncreasing(a4,6));
    printf("\n isSystematicallyIncreasing a5 expected 0, outcome: %d",isSystematicallyIncreasing(a5,6));*/
    //printf("\n isSystematicallyIncreasing a6 expected 0, outcome: %d",isSystematicallyIncreasing(a6,4));

    printf("\n\n");
//    printf("isFactorialPrime, 2: expected op=1, op= %d \n",isFactorialPrime(2));
//    printf("isFactorialPrime, 3: expected op=1, op= %d \n",isFactorialPrime(3));
//    printf("isFactorialPrime, 7: expected op=1, op= %d \n",isFactorialPrime(7));
//    printf("isFactorialPrime, 8: expected op=0, op= %d \n",isFactorialPrime(8));
//    printf("isFactorialPrime, 721: expected op=0, op= %d \n",isFactorialPrime(721));
//    printf("HEY");
     printf("Largest difference of even = %d\n",largestDifferenceOfEven(a7,9));
     printf("Largest difference of even = %d\n",largestDifferenceOfEven(a8,5));


return 0;
}

int largestDifferenceOfEven(int a[],int len){
    int maxd=-1;
    //int eve1;
    for(int i=0;i<len;i++){
        if(a[i]%2==0){//eve1=a[i]
            for(int j=i+1;j<len;j++){
                if(a[j]%2==0){
                    if((a[i]-a[j])>maxd){
                        maxd=a[i]-a[j];
                    }
                    if((a[j]-a[i])>maxd){
                        maxd=a[j]-a[i];
                    }
                }
            }
        }
    }
    return maxd;

}
int isFactorialPrime(int n){
    int fval;
    if(checkPrime==0){return 0;}
    for(int i=0;i<n;i++){
        if(fval+1==n){return 1;}
        if(fval+1>fval+1){return 0;}
    }
}
int checkPrime(int n){
    if(n==2){return 1;}
    for(int i=2;i<=n/2+1;i++){
        if(n%i==0){return 0;}
    }
    return 1;
}

int factorial(int n){
    int num;
    if(n==1){return 1;}
    num=n*factorial(n-1);
    return num;
}

int isSystematicallyIncreasing(int a[],int len){
    int ot=0;
    int j;
    for(int i=0;i<len;i++){
        for(j=0;j<=i;j++){
            ot++;
            printf("j= %d, ot= %d\n",j ,ot);
            if(a[i+j]!=ot){return 0;}

        }
        i=i+j-1;
        printf("j= %d, ot= %d\n",j,ot);
    }

return 1;
}
