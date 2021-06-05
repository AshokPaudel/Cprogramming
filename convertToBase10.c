#include<stdio.h>
//#include<math.h>
int isLegalNumber(int a[],int len,int base);
int convertToBase10(int a[],int len, int base);
int power(int base,int i);
int main(){
    int a[4]={1, 0, 1, 1};
    int a2[3]={1, 1, 2};
    int base2=3;
    int len2=3;
    int base=2;
    int len=4;
    printf("\n%d\n",convertToBase10(a,len,base));
    printf("\n%d\n",convertToBase10(a2,len2,base2));
    return 0;
}
int isLegalNumber(int a[],int len,int base){
    for (int i=0;i<len;i++){
        if(a[i]>=base){return 0;}
    }
    return 1;
}
int convertToBase10(int a[],int len, int base){
    if(!isLegalNumber(a,len,base)){return 0;}
    int sum=0;
    for(int i=0;i<len;i++){
        sum+=a[len-1-i]*power(base,i);
    }
    return sum;
}
int power(int base,int i){
    int ret=1;
    for(int j=0;j<i;j++){ret*=base;}

    return ret;
}
