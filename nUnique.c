#include <stdio.h>
int isNunique(int a[],int len,int n);
int main(){
    int a[5]={7, 3, 3, 2, 4};
    int a2[1]={1};
    int len2=1;
    int len=5;
    int n1=6,n2=10,n3=11,n4=8;
    printf("\n%d\n",isNunique(a,len,n1));
    printf("\n%d\n",isNunique(a,len,n2));
    printf("\n%d\n",isNunique(a,len,n3));
    printf("\n%d\n",isNunique(a,len,n4));
     printf("\n%d\n",isNunique(a2,len2,n4));

return 0;
}
int isNunique(int a[],int len,int n){
    int count=0;
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(a[i]+a[j]==n){count++;}
        }
    }
    if(count==1){return 1;}
    else{return 0;}

}
