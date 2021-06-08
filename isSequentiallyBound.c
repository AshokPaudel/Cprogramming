#include <stdio.h>
int isSequentiallyBounded(int a[ ], int len);
int main (){
    int a1[2]={0, 1};
    int a2[2]={0, 1};
    int a3[0]={};
    int a4[4]={5, 5, 5, 5};
    int a5[6]={5, 5, 5, 2, 5,5};
    printf("\na1 is sequantially Bound?, %d",isSequentiallyBounded(a1,2));
    printf("\na2 is sequantially Bound?, %d",isSequentiallyBounded(a2,2));
    printf("\na3 is sequantially Bound?, %d",isSequentiallyBounded(a3,0));
    printf("\na4 is sequantially Bound?, %d",isSequentiallyBounded(a4,4));
    printf("\na5 is sequantially Bound?, %d",isSequentiallyBounded(a5,6));

return 0;
}

int isSequentiallyBounded(int a[], int len){
    int count=1;
    for (int i=0;i<len-1;i++){
        if((a[i]>a[i+1])||(a[i]<1)){
            //printf("\n array is not sorted or have 0/negative\n");
            return 0;
        }
        else if (a[i]==a[i+1]){count++;
            if(count>a[i]){//printf("\ncount exceeded\n");
                    return 0;}
        }
        else{count=1;}
        //printf("\nCount=%d",count);
    }
    return 1;
}


/*
for(int i=0;i<len;i++){
        if((a[i]>a[i+1])||(a[i]<1)){return 0;//not sorted in ascending order
        }
        if(a[i]==a[i+1]){count+=1;//printf("\ncount is increased by 1\n");
            }
        if(count>a[i]){//printf("\nCount Exceeded\n");
            return 0;}
        if(a[i]<a[i+1]){count=1;}
        //printf("\ncount=%d");
    }
    //printf("\nFinal count=%d",count);
    return 1;
*/
