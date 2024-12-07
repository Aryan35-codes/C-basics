#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n%2==0){                      // if ka block
        printf("Even Number");
    }
  //  if(n%2!=0){                        // ! = not
     //   printf("Odd Number");
  //  }
  else{
    printf("Odd Number");
  }
    return 0;
}