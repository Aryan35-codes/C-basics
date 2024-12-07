#include<stdio.h>           //**//
int main(){
int n;
printf("Enter a number:");
scanf("%d",&n);
// 5! = 1 x 2 x 3 x 4 x 5
int product = 1;
for(int i=1;i<=n;i++){
    product = product * i;    
}
    printf("The factorial of given number is %d",product);
    return 0;
}