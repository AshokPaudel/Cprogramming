#include<stdio.h>
#include<stdlib.h>
#include<math.h>>
void doIntegerRounding(int a[],int n,int len);
int main(){
    int a[5]={1, 2, 3, 4, 5};
    int a2[6]={-18, 1, 2, 3, 4, 5};
    int a3[5]={1,2,3,4,5};
    int len= 5;
    doIntegerRounding(a,2,5);
    doIntegerRounding(a,3,5);
    doIntegerRounding(a,-3,5);
    doIntegerRounding(a2,4,6);
    doIntegerRounding(a3,5,5);
    doIntegerRounding(a3,100,5);

}

void doIntegerRounding(int a[],int n,int len){
    int* ret=(int *) malloc(sizeof(int)*len);
    for(int i=0;i<len;i++){
       if(a[i]<0||n<0||a[i]%n==0){ret[i]=a[i];}
       else {
            if(a[i]%n<=ceil(n/2)){ret[i]=n*(a[i]/n);}
            else {
              ret[i]=n*(1+a[i]/n)  ;
            }

       }

    }
    for(int i=0;i<len;i++){
        printf("%d \t",a[i]);
    }
    printf("Rounding to base %d\n",n);
    for(int i=0;i<len;i++){
        printf("%d \t",ret[i]);
    }
    printf("\n\n");

}

/*
void doIntegerRounding(int a[],int n, int len){
    int* ret=(int *) malloc(sizeof(int)*len);
    for(int i=0;i<len;i++){
        if(a[i]<0||n<0){ret[i]=a[i];}
        else(a[i]%n==0){
            ret[i]=(a[i]/n)*a[i];
        }
        else {
                if ((n-a[i]%n)>n/2){
                ret[i]=(a[i]/n)*a[i];
                }
                else {
             ret[i]=((a[i]%n)+1)*a[i];
            //ret[i]=a[i]+n-a[i]%n;
        }
    }
    for(int i=0;i<len;i++){
        printf("%d \t",a[i]);
    }
    printf("Rounding to base %d\n",n);
    for(int i=0;i<len;i++){
        printf("%d \t",ret[i]);
    }
    printf("\n\n");
}
*/
