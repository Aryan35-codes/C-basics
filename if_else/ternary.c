#include<stdio.h>  // Ternary operators
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    // Ternary operator
    // expression1 ?  expression2 :  expression3 ;
    n%2==0 ?  printf("Even number") :  printf("Odd number");
    // if(n%2==0)
    //   printf("Even number") ;
    // else
    // printf("Odd number");
    return 0;
}