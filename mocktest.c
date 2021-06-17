/*
1. A hodder number is one that is prime and is equal to 2j-1 for some j. For example, 31 is a
hodder number because 31 is prime and is equal to 25-1 (in this case j = 5). The first 4 hodder
numbers are 3, 7, 31, 127
Write a function with signature int isHodder(int n) that returns 1 if n is a hodder number,
otherwise it returns 0.
Recall that a prime number is a whole number greater than 1 that has only two whole number
factors, itself and 1.
2. One word is an anagram of another word if it is a rearrangement of all the letters of the
second word. For example, the character arrays {‘s’, ‘i’, ‘t’} and {‘i’, ‘t’, ‘s’} represent words
that are anagrams of one another because “its” is a rearrangement of all the letters of “sit” and
vice versa. Write a function that accepts two character arrays and returns 1 if they are anagrams
of one another, otherwise it returns 0. For simplicity, if the two input character arrays are equal,
you may consider them to be anagrams.
If you are programming in Java or C#, the function signature is:
int areAnagrams(char [ ] a1, char [ ] a2)
If you are programming in C or C++, the function signature is
int areAnagrams(a1 char[ ], a2 char[ ], int len) where len is the length of a1 and a2.
Hint: Please note that “pool” is not an anagram of “poll” even though they use the same letters.
Please be sure that your function returns 0 if given these two words! You can use another array
to keep track of each letter that is found so that you don’t count the same letter twice (e.g., the
attempt to find the second “o” of “pool” in “poll” should fail.)
Hint: do not modify either a1 or a2, i.e., your function should have no side effects! If your
algorithm requires modification of either of these arrays, you must work with a copy of the array
and modify the copy!
Examples
if input arrays are return{‘s’, ‘i’, ‘t’} and {‘i’, ‘t’, ‘s’} 1
{‘s’, ‘i’, ‘t’} and {‘i’, ‘d’, ‘s’} 0
{‘b’, ‘i’, ‘g’} and {‘b’, ‘i’, ‘t’} 0
{‘b’, ‘o’, ‘g’} and {‘b’, ‘o’, ‘o’} 0
{} and {} 1
{‘b’, ‘i’, ‘g’} and {‘b’, ‘i’, ‘g’} 1
3. The Fibonacci sequence of numbers is 1, 1, 2, 3, 5, 8, 13, 21, 34, … The first and second
numbers are 1 and after that ni = ni-2 + ni-1, e.g., 34 = 13 + 21. A number in the sequence is called
a Fibonacci number. Write a method with signature int closestFibonacci(int n) which returns
the largest Fibonacci number that is less than or equal to its argument. For example,
closestFibonacci(13) returns 8 because 8 is the largest Fibonacci number less than 13 and
closestFibonacci(33) returns 21 because 21 is the largest Fibonacci number that is <= 33.
closestFibonacci(34) should return 34. If the argument is less than 1 return 0. Your solution must
not use recursion because unless you cache the Fibonacci numbers as you find them, the
recursive solution recomputes the same Fibonacci number many times.
*/

#include<stdio.h>
int isHolder(int n);
int areAnagrams( char a1[], char a2[], int len);
int closestFibonacci(int n);
int power(int base,int power);

int main(){
    char a1[4]={'p','e','a','l'};
    char a2[4]={'p','a','e','l'};
    char a5[4]={'p','o','o','l'};
    char a6[4]={'p','o','l','l'};
    char a3[3]={'b','b','b'};
    char a4[3]={'b','u','g'};
    printf("\n\nisHolder passing 31 %d",isHolder(31));
    printf("\n\nisHolder passing 30 %d",isHolder(30));
    printf("\n\nareAnagrams passing 2 char arrays: 'peal' &'pael' %d",areAnagrams(a1,a2,4));
    printf("\n\nareAnagrams passing 2 char arrays: 'peal' &'pael' %d",areAnagrams(a1,a2,4));
     printf("\n\nareAnagrams passing 2 char arrays: 'pool' &'poll' %d",areAnagrams(a5,a6,4));
    printf("\n\nareAnagrams passing 2 char arrays: 'bbb' &'bug' %d",areAnagrams(a3,a4,3));
    printf("\n\nclosestFibonacci passing 15  %d",closestFibonacci(15));
    printf("\n\nclosestFibonacci passing 34  %d",closestFibonacci(34));

    return 0;

}
int isHolder(int n){
    for(int i=2;i<=n/2+1;i++){
        if(n%i==0){return 0;}
    }
    for(int j=0;j<n/2;j++){
        if(power(2,j)-1==n){return 1;}
        if(power(2,j)-1>n){return 0;}
    }
    return 0;
}
int power(int base,int power){
    int val=base;
    if(power==0){val=1;}
    for(int i=1;i<power-1;i++){
        val*=base;
    }
    return val;
}

int areAnagrams(  char a1[], char a2[], int len){
    int count=0;
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            if(a1[i]==a1[j]){count++;}
        }
    for(int k=0;k<len;k++){
        if(a1[i]==a2[k]){count--;}
    }
    if(count!=0){return 0;}
    }
    return 1;
}
int closestFibonacci(int n){
    int f1=1;
    int f2=1;
    int total=0;
    while(1){
        total=f2+f1;
        if(total>n){return f2;}
        f1=f2;
        f2=total;
    }
}
