/*
QUESTION 3. A normal number is defined to be one that has no odd factors, except for 1 and possibly itself.
Write a method named isNormal that returns 1 if its integer argument is normal, otherwise it returns 0. The
function signature is
int isNormal(int n)
Examples: 1, 2, 3, 4, 5, 7, 8 are normal numbers. 6 and 9 are not normal numbers since 3 is an odd factor. 10 is
not a normal number since 5 is an odd factor.
*/

#include <stdio.h>
#include<stdlib.h>
int isNormal(int n);
int main(){
	int n =21;
	int isN;
	isN=isNormal(n);
	if (isN==0){
		printf("\nThe number is not normal\n");
		return 1;
	}
	printf("\nThe number is normal\n");
	return 0;
}

int isNormal(int n){	
	int fact=0;
	for (int i=3;i<=n/2;i++){
		if (n%i==0){
			fact =i;
			if (fact%2==1){
				printf("\nExiting\n");
				return 0;
			}
			
		}
	}
	return 1;
}