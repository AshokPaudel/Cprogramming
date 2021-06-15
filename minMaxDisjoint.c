/*
{18, -1, 3, 4, 0} 0 The max and min values are
adjacent to one another.
{9, 0, 5, 9} 0 The max value occurs twice
in the array.
{0, 5, 18, 0, 9| 0 The min value occurs twice in
the array.
{7, 7, 7, 7} 0 The min and the max value
must be different.
{} 0 There is no min or max.
{1, 2}
*/
#include<stdio.h>
#include<math.h>
int isMinMaxDisjoint(int a[],int len);
int main(){
    int a[5]={5, 4, 1, 3, 2};
    int a2[5]={18, -1, 3, 4, 0};
    int a3[4]={9, 0, 5, 9};
    int a4[5]={0, 5, 18, 0, 9};
    int len=5;
    printf("\n%d",isMinMaxDisjoint(a,len));
    printf("\n%d",isMinMaxDisjoint(a2,len));
    printf("\n%d",isMinMaxDisjoint(a3,4));
    printf("\n%d",isMinMaxDisjoint(a4,len));
return 0;
}

int isMinMaxDisjoint(int a[],int len){
    int minv,maxv,mini,maxi,minc,maxc;
    if(len<3){return 0;}
    minv=maxv=a[0];
    mini=maxi=0;
    minc=maxc=1;
    for(int i=1;i<len;i++){
        if(minv==a[i]){minc++;}
        if(minv>a[i]){
            minv=a[i];
            mini=i;
            minc=1;
        }
        if(maxv==a[i]){maxc++;}
        if(maxv<a[i]){
            maxv=a[i];
            maxi=i;
            maxc=1;
        }

        //printf("\nPrinting values: minc=%d, maxc= %d, minv =%d, maxv= %d, mini= %d maxi =%d, i= %d, a[i]= %d \n",minc,maxc,minv,maxv,mini,maxi, i, a[i]);
    }
    if(minc==1&&maxc==1 && abs(mini-maxi)>1){
        return 1;
    }
    printf("\nPrinting values: minc=%d, maxc= %d, minv =%d, maxv= %d, mini= %d maxi =%d \n",minc,maxc,minv,maxv,mini,maxi);
    return 0;
}
