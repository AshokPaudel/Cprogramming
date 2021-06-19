#include<stdio.h>
int isFactorialPrime(int n);
int checkPrime(int n);
int factorial(int n);
int main(){

    printf("%d\n",factorial(4));
    printf("%d\n",checkPrime(5));

    printf("\n\n");
    printf("isFactorialPrime, 2: expected op=1, op= %d \n",isFactorialPrime(2));
    printf("isFactorialPrime, 3: expected op=1, op= %d \n",isFactorialPrime(3));
    printf("isFactorialPrime, 7: expected op=1, op= %d \n",isFactorialPrime(7));
    printf("isFactorialPrime, 8: expected op=0, op= %d \n",isFactorialPrime(8));
    printf("isFactorialPrime, 721: expected op=0, op= %d \n",isFactorialPrime(721));
    printf("HEY");

return 0;
}
int isFactorialPrime(int n){
    int fval;
    if(checkPrime(n)==0){
            //printf("\nInner function call success\n");
            return 0;}
    for(int i=1;i<n;i++){
        fval=factorial(i);
        //printf("i= %d fact(i) = %d\n",i,fval);
        if(n==fval+1){return 1;}
        if(n<fval+1){return 0;}
    }
    return 0;
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
