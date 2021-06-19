#include<stdio.h>
int istriangular(int n);
int isMercurial(int a[],int len);
int is235Array(int a[],int len);

int main(){
    int a1[8]={1, 2, 10, 3, 15, 1, 2, 2};
    int a2[8]={5, 2, 10, 3, 15, 1, 2, 2};
    int a3[5]={2, 3, 5, 7, 11};
    int a4[5]={2, 3, 6, 7, 11};
    printf("\n\n34 istriangular or not: %d",istriangular(34));
    printf("\n\n55 istriangular or not %d",istriangular(55));
    printf("\n\na2 isMercurial or not, expectation 0, output: %d",isMercurial(a1,8));
    printf("\n\na2 isMercurial or not, expectation 1, output:  %d",isMercurial(a2,8));
    printf("\n\na2 is235Array or not %d",is235Array(a2,8));
    printf("\n\na3 is235Array or not expectaton 1: output: %d",is235Array(a3,5));
    printf("\n\na4 is235Array or not expectation 0: output:%d",is235Array(a4,5));

    return 0;
}

int istriangular(int n){
    int i=0;
    while(1){
        if(i*(i+1)/2==n){return 1;}
        if(i*(i+1)/2>n){return 0;}
        i++;
    }
    return 0;
}

int isMercurial(int a[],int len){
    for(int i=0;i<len;i++){
        if(a[i]==1){
            for(int j=i+1;j<len;j++){
                if(a[j]==3){
                    for(int k=j+1;k<len;k++){
                        if(a[k]==1){return 0;}
                    }
                }
            }
        }
    }
    return 1;
}

int is235Array(int a[],int len){
    int div=0;
    int nodiv=0;

    for(int i=0;i<len;i++){
        if(a[i]%2==0){div++;}
        if(a[i]%3==0){div++;}
        if(a[i]%5==0){div++;}
        if(a[i]%2!=0&&a[i]%3!=0&&a[i]%5!=0){
            nodiv++;
        }
    }
    if(div+nodiv==len){return 1;}
    return 0;
}
