/*
3. An array is called centered-15 if some consecutive sequence of elements of the array sum to
15 and this sequence is preceded and followed by the same number of elements. For example
{3, 2, 10, 4, 1, 6, 9} is centered-15 because the sequence 10, 4, 1 sums to 15 and the
sequence is preceded by two elements (3, 2) and followed by two elements(6,9).
Write a method called isCentered15 that returns 1 if its array argument is centered-15, otherwise
it returns 0.
If you are programming in Java or C#, the function prototype is
int isCentered15(int[ ] a)
If you are programming in C++ or C, the function prototype is
int isCentered5(int a[ ], int len) where len is the number of elements in the array.
Examples
if a is retur
n
reason
{3, 2, 10, 4, 1, 6, 9} 1 the sequence 10, 4, 1 sums to 15 and is
preceded by 2 elements and followed by 2
elements. Note that there is another sequence
that sums to 15 (6,9}. It is okay for the array to
have more than one sequence that sums to 15
as long as at least one of them is centered.
{2, 10, 4, 1, 6, 9} 0 (10, 4, 1) is preceded by one element but
followed by two. (9,6) is preceded by fve
elements but followed by none. Hence neither
qualify as centered.
{3, 2, 10, 4, 1, 6} (10, 4, 1) is preceded by two elements but
followed by one. Note that the values 3, 2, 4, 6
sum to 15 but they are not consecutive.
{1,1,8, 3, 1, 1} The entire array sums to 15, hence the
sequence is preceded by zero elements and
followed by zero elements.
{9, 15, 6} 1 the sequence (15) is preceded by one element
and followed by one element.
{1, 1, 2, 2, 1, 1} 0 no sequence sums to 15.
{1, 1, 15 -1,-1} 1 there are three diﬀerent sequences that sum to
15, the entire array, (1, 15, -1) and (15). In this
case they all are centered but the requirement
is that just one of them has to be.
*/
#include<stdio.h>
int isCentered15(int a[],int len);
int main(){
    int a1[7]={3, 2, 10, 4, 1, 6, 9} ;
    int a2[6]={2, 10, 4, 1, 6, 9}  ;
    int a3[6]={3, 2, 10, 4, 1, 6}     ;
    int a4[6]={1,1,8, 3, 1, 1}         ;
    int a5[3]={9, 15, 6}               ;
    int a6[6]={1, 1, 2, 2, 1, 1}       ;
    int a7[5]={1, 1, 15 -1,-1}          ;

    int len1= sizeof(a1)/sizeof(int);
    int len2= sizeof(a2)/sizeof(int);
    int len3= sizeof(a3)/sizeof(int);
    int len4= sizeof(a4)/sizeof(int);
    int len5= sizeof(a5)/sizeof(int);
    int len6= sizeof(a6)/sizeof(int);
    int len7= sizeof(a7)/sizeof(int);

    printf("\n%d\n",isCentered15(a1,len1));
    printf("\n%d\n",isCentered15(a2,len2));
    printf("\n%d\n",isCentered15(a3,len3));
    printf("\n%d\n",isCentered15(a4,len4));
    printf("\n%d\n",isCentered15(a5,len5));
    printf("\n%d\n",isCentered15(a6,len6));
    printf("\n%d\n",isCentered15(a7,len7));

return 0;
}
int isCentered15(int a[],int len){
    int sum=0;
    if(len%2==0){
        for(int i=0;i<len;i++){
            sum+=a[i];
        }
        if(sum==15){
            return 1;
        }
        else {
            return 0;
        }
    }
    else {
        int mid=(len-1)/2;
        for(int i=0;i<=mid;i++){
            sum=0;
            for(int j=-i;j<=i;j++){
                sum+=a[mid+j];
                //printf("SUM=%d",sum);
                //printf("\ni=%d,j=%d\n",i,j);
            }
            if(sum==15){
                return 1;
            }
        }
        return 0;
    }

}
