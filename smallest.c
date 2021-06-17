#include<stdio.h>
int isExist(int n);
int smallest(int n);
int main(){
    printf("\n%d",smallest(3));
    printf("\n%d",smallest(4));
    printf("\n%d",smallest(5));
    printf("\n%d",smallest(6));
    printf("\n%d",smallest(7));
    printf("\n%d",smallest(8));
    printf("\n%d",smallest(9));
    printf("\n%d",smallest(100));
}

int isExist(int n){
    int d=2;
    while(1){
        if(n%10==d){return 1;}
        n=n/10;
        if(n==0){return 0;}
    }
}
int smallest(int n){
    int num=2;
    int mul=1;
    int count=0;
    while(1){
        if(isExist(num*mul)){
            count++;
            mul++;
            if(count==n){return num;}
        }
        else{
            count=0;
            num++;
            mul=1;
        }
        //printf("\nnum =%d",num);
    }
}
