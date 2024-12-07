#include<stdio.h>
int main(){
int a,b; // a > b
printf("Enter didvidend:");
scanf("%d",&a);
printf("Enter didvisor:");
scanf("%d",&b);
//int q = a/b;
//int r = a - (b*q);     // Dividend = Remainder + (Divisor * Quotient)
//printf("The Remainder when %d is divided by %d is %d",a,b,r);//
int r = a%b;
printf("The Remainder when %d is divided by %d is %d",a,b,r);

    return 0;
}