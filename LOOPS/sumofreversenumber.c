#include<stdio.h>     // sum of given and reverse of a number//
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int r = 0;
    while(n > 0){
        r = r * 10;
        r = r + (n%10);
        n = n / 10;
      }
      
     printf("The sum of given and reverse of a number is %d",r);
        return 0;
    }