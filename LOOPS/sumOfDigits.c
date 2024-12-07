#include<stdio.h>         // ** //
int main(){                // WAP: Write A Prograame
    int n;              // ld => Last digit 
    printf("Enter a number:");
    scanf("%d",&n);
    int sum = 0;
    int ld = 0;
    while(n=!0){
       ld = n % 10;
        sum = sum + ld;
        n = n / 10;
    }
    printf("Sum of digits of given number is %d",sum);
    return 0;                                          
}                                        // 2:31:57 to 2:39:57