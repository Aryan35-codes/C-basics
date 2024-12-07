#include<stdio.h>     // reverse of a number//
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int reverse = 0;
    while(n > 0){
         reverse = reverse * 10;
        reverse = reverse + (n%10);
       
        n = n / 10;
    }
    
    printf("The reversed number is %d",reverse);
        return 0;
    }