#include<stdio.h>
int isSquare(int n);
int main(){
    int n=16;
    printf("\n%d\n",isSquare(n));
    printf("\n%d\n",isSquare(19));
    printf("\n%d\n",isSquare(25));
    printf("\n%d\n",isSquare(1));

return 0;
}

int isSquare(int n){
    int i=1;
    while(1){
        if(i*i==n){return 1;}
        else if (i*i>n){return 0;}
        else {i++;}
    }
}
