/*
A prime number is an integer that is divisible only by 1 and itself. A porcupine number is a
prime number whose last digit is 9 and the next prime number that follows it also ends with the
digit 9. For example 139 is a porcupine number because:
a. it is prime
b. it ends in a 9
c. The next prime number after it is 149 which also ends in 9. Note that 140, 141, 142, 143, 144,
145, 146, 147 and 148 are not prime so 149 is the next prime number after 139.
Write a method named findPorcupineNumber which takes an integer argument n and returns the
first porcupine number that is greater than n. So findPorcupineNumber(0) would return 139
(because 139 happens to be the first porcupine number) and so would
findPorcupineNumber(138). But findPorcupineNumber(139) would return 409 which is the
second porcupine number.
The function signature is
int findPorcupineNumber(int n)
You may assume that a porcupine number greater than n exists.
You may assume that a function isPrime exists that returns 1 if its argument is prime,
otherwise it returns 0. E.G., isPrime(7) returns 1 and isPrime(8) returns 0.
Hint: Use modulo base 10 arithmetic to get last digit of a number.
*/
# include <stdio.h>
int findPorcupineNumber(int n);
int findNextPrime(int n);
int main(){
	int n=138;
    //printf("next prime number: %d \n",findNextPrime(n));
	printf("\nThe next porcupine number to %d is %d\n",n ,findPorcupineNumber(n));
    return 0;
}

int findNextPrime(int n){
   int divcount;
	for(int i=n+1;i<2*n+3;i++){
        divcount=0;
		for(int j=2;j<=i/2;j++){
			if(i%j==0){
              divcount=1;
				break;
              }
          }
        if(divcount==0){
          return i;
        }
	}
  return 0;
}
int findPorcupineNumber(int n){
	int p1,p2;
	while (1){
		p1=findNextPrime(n);
		n=p1;
		if (p1%10==9){
			p2=findNextPrime(n);
		}
		else {
			continue;
		}
		if(p2%10==9){
			return p1;
		}				
	}
}
