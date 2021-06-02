#include <stdio.h>

int main() {
    printf("Hello, world\n");
    int h=9;
    int ar[7]={2,1,4,5,6,7};
    int len=sizeof(ar)/sizeof(int);
    //printf("%d",len);
    int flag=ar[0]%2;
    for (int i=1;i<len;i++){
      if (flag==ar[i]%2){
        printf("\nThis is not the valid wave error found at %d\n",i);
        return 0;
      }
      else {
        flag=ar[i]%2;
      }
    }
    printf("this is the wave\n"); 
  
    return 1;
}  