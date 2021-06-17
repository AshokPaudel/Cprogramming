#include<stdio.h>
#include<stdlib.h>
int *clusterCompression(int a[],int len);

int main(){
    int a[11]={3, 3, 3, 4, 4, 3, 2, 2, 2, 2, 4};
    int a2[10]={0, 0, 0, 2, 0, 2, 0, 2, 0, 0};
    int a3[1]={18};
    int a4[0]={};
    int len=11;
    int *p;
    p=clusterCompression(a,len);
    for(int i=0;i<len;i++){
        printf("%d\t",*(p+i));
    }
    printf("\n\n");
    p=clusterCompression(a2,len);
    for(int i=0;i<len;i++){
        printf("%d\t",*(p+i));
    }
     printf("\n\n");
    p=clusterCompression(a3,1);
    for(int i=0;i<len;i++){
        printf("%d\t",*(p+i));
    }
    printf("\nempty array\n");
    int *pp=clusterCompression(a4,0);
    for(int i=0;i<len;i++){
        printf("%d\t",*(pp+i));
    }
    return 0;
}
int *clusterCompression(int a[],int len){
    int count=1;
    for(int i=1;i<len;i++){
        if(a[i]!=a[i-1]){count++;}
    }
    int * ret = (int *)malloc(sizeof(int)*count);
    ret[0]=a[0];
    int j=0;
    for(int i=1;i<len;i++){
        if(a[i]!=a[i-1]){
            j++;
            ret[j]=a[i];
        }
    }

    /*for(int i=0;i<5;i++){
        printf("%d\n",ret[i]);
    }
    */
    return ret;
}
