/*
An array is defined to be inertial if the following conditions hold:
a. it contains at least one odd value
b. the maximum value in the array is even
c. every odd value is greater than every even value that is not the maximum value.
So {11, 4, 20, 9, 2, 8} is inertial because
a. it contains at least one odd value
b. the maximum value in the array is 20 which is even
c. the two odd values (11 and 9) are greater than all the
even values that are not equal to 20 (the maximum), i.e., (4, 2, 8}.
However, {12, 11, 4, 9, 2, 3, 10} is not inertial because it fails condition (c), i.e., 10 (which is
even) is greater 9 (which is odd) but 10 is not the maximum value in the array.
Write a function called isIntertial that accepts an integer array and returns 1 if the array is
inertial; otherwise it returns 0.
If you are programming in Java or C#, the function signature is
int isInertial(int[ ] a
If you are programming in C or C++, the function signature is
int isInertial(int a[ ], int len) where len is the number of elements in the arraySome other examples:
if the input array is return reason
{1} 0 fails condition (a) – the maximum value must be even 
{2} 0 fails condition (b) – the array must contain at least one odd value.
{1, 2, 3, 4} 0 fails condition (c) – 1 (which is odd) is not greater than
all even values other than the maximum (1 is less than 2 which is not the maximum)
{1, 1, 1, 1, 1, 1, 2} 1 there is no even number other than the maximum. Hence, there can be no other even values that are greater than 1.
{2, 12, 4, 6, 8, 11} 1 11, the only odd value is greater than all even values except 12 which is the maximum value in the array.
{2, 12, 12, 4, 6, 8, 11} 1 same as previous, i.e., it is OK if maximum value occurs more than once.
{-2, -4, -6, -8, -11} 0 -8, which is even, is not the maximum value but is greater than -11 which is odd
{2, 3, 5, 7} 0 the maximum value is odd
{2, 4, 6, 8, 10} 0 there is no odd value in the array.

*/

#include <stdio.h>

int inertialArray(int a[],int len);
int main(){
     int a[7]={12, 2, 4, 33, 3, 44, 10};
	//int a[6]={11, 4, 20, 9, 2, 8};
	int len=7;
    int ret;
    ret =inertialArray(a,len);
	printf("\n%d\n",ret);
}

int inertialArray(int a[],int len){
	//check odd
	int hasodd=0;	
	for(int i=0;i<len;i++){
		if(a[i]%2==1){
			hasodd=1;
			break;
		}
	}
	if(hasodd==0){
		printf("\nDoesn't have at least 1 odd element\n");
	}
	//check if maxvalue is even or not
	int maxv=a[0];
	for (int i=0;i<len;i++){
		if (maxv<a[i]){
			maxv=a[i];
		} 
	}
	if (maxv%2==1){
		printf("\nMaxvalue is not even\n");
		return 0;
	}
	//check if odd value is greater than every even except max value
	int cmpv;
	for(int i=0;i<len;i++){
		if (a[i]%2==1){
			for (int j=0;j<len;j++){
				cmpv=a[j];
				if((cmpv%2==0)&&(cmpv!=maxv)&&(cmpv>a[i])){
					printf("\nHave other even value that is not max which is  greater than odd,\n");
					return 0;				
				}
			}
			
		}
	}
return 1;
		
	
}