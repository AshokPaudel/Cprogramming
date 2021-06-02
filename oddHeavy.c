/*
QUESTION 2. An array is defined to be odd-heavy if it contains at least one odd element and every odd
element is greater than every even element. So {11, 4, 9, 2, 8} is odd-heavy because the two odd elements (11
and 9) are greater than all the even elements. And {11, 4, 9, 2, 3, 10} is not odd-heavy because the even element
10 is greater than the odd element 9. Write a function called isOddHeavy that accepts an integer array and
returns 1 if the array is odd-heavy; otherwise it returns 0. Some other examples: {1} is odd-heavy, {2} is not
odd-heavy, {1, 1, 1, 1} is odd-heavy, {2, 4, 6, 8, 11} is odd-heavy, {-2, -4, -6, -8, -11} is not odd-heavy.
If you are programming in Java or C#, the function signature is
int isOddHeavy(int[ ] a)
If you are programming in C or C++, the function signature is
int isOddHeavy(int a[ ], int len)
where len is the number of elements in the array
*/
/*
QUESTION 2. An array is defined to be odd-heavy if it contains at least one odd element and every odd
element is greater than every even element. So {11, 4, 9, 2, 8} is odd-heavy because the two odd elements (11
and 9) are greater than all the even elements. And {11, 4, 9, 2, 3, 10} is not odd-heavy because the even element
10 is greater than the odd element 9. Write a function called isOddHeavy that accepts an integer array and
returns 1 if the array is odd-heavy; otherwise it returns 0. Some other examples: {1} is odd-heavy, {2} is not
odd-heavy, {1, 1, 1, 1} is odd-heavy, {2, 4, 6, 8, 11} is odd-heavy, {-2, -4, -6, -8, -11} is not odd-heavy.
If you are programming in Java or C#, the function signature is
int isOddHeavy(int[ ] a)
If you are programming in C or C++, the function signature is
int isOddHeavy(int a[ ], int len)
where len is the number of elements in the array
*/
#include <stdio.h>
#include <stdlib.h>
int OddHeavy(int [],int len);

int main(){
	int arr[5]= {1, 4, 5, 8, 11};
	int len =5;
	int oddH;
	oddH=OddHeavy(arr,len);
	if(oddH==0){
		printf("\nThe array is not oddheavy\n");
		return 1;
	}
	printf("\nThe array is oddd Heavy\n");
	return 0;
}

int OddHeavy(int arr [],int len){
	//int oddele,evenele=0;
	for (int i=0;i<len;i++){
		for (int j=0;j<len;j++){
             //printf("i,j pairs: %d\t%d\n",i,j);
			if(arr[i]%2==1 && arr[j]%2==0 && arr[j]>arr[i]){
				return 0;
			}
		}
		
	}
  return 1;
}