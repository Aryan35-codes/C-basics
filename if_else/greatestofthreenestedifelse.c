#include<stdio.h>
int main(){                           
    int a,b,c;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printf("Enter third number:");
    scanf("%d",&c);
    if(a>b){  // 'b' is out of race
        if(a>c)
            printf("%d is greatest",a);
        else  // a<c -> b < a < c
        printf("%d is greatest",c);
    }
    else{             // b > a => 'a' is out of race
        if(b>c)
        printf("%d is greatest",b);
        else // c>b  -> a < b < c
        printf("%d is greatest",c);
    }
   
    
    return 0;                               // 1:39:00 to 1:49:00
}