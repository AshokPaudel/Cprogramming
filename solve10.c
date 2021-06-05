//Looks like there is no solution for this problem.,
#include<stdio.h>
int* solve10();
int fac(int n);
int main(){
    int *a;
    printf("\nFactorial of 3 is %d",fac(3));
    a=solve10();
    printf("\nTwo numbers are: %d , %d\n",*a,*(a+1));
}
int* solve10(){
    static int ret[2]={0,0};
    int n=10;
    int fac10=fac(n);
    for (int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            //printf("%d %d \n",i,j);
            if (fac(i)+fac(j)==fac10){
                ret[0]=i;
                ret[1]=j;
            }
        }
    }
    printf("\nPrinting inside function %d  %d \n",ret[0],ret[1]);
    return ret;
}
int fac(int n){
    int fac=1;
    for (int i=1;i<=n;i++){
        fac*=i;
    }
    printf("%d\n",fac);
    return fac;
}
