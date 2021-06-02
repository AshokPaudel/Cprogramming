/*3. A Nice array is defined to be an array where for every value n in the array, there is also an
element n­1 or n+1 in the array.
For example, {2, 10, 9, 3} is a Nice array because
2 = 3­1
10 = 9+1
3 = 2 + 1
9 = 10 ­1
Other Nice arrays include {2, 2, 3, 3, 3}, {1, 1, 1, 2, 1, 1} and {0, ­1, 1}.
*/

#include <stdio.h>
#include <stdlib.h>
int main( ){
	int arr[5] ={2, 2, 3, 3, 9};
	int len =sizeof(arr)/sizeof(int);
	for (int i=0;i<len;i++){
		int find=0;
		for (int j=0;j<len;j++){
			if((arr[i]-1==arr[j])||(arr[i]+1==arr[j])){
				find=1;
				continue;
			}
		}
		if (find==0){
			printf("the array is not nice\n");
			return 1;
		}
			
	}		
	printf("\nThe array is nice\n");
	return 0;
}