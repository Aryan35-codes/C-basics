#include<stdio.h>
int main(){
   int a;
   printf("Enter an Integer:");
   scanf("%d",&a);
   if(a<0){                         //if 'a' is negtive
    a = a * (-1); 
   }
   printf("The absolute value is %d",a);
   
    return 0;
}