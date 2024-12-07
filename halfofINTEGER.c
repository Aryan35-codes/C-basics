#include<stdio.h>
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    float b = a / 2;
    printf("Half of your number is %f\n",b);
    float x ;
    printf("Enter a decimal number:");
    scanf("%f",&x);
    int y = x;
    printf("Integeral part of it is %d\n",y);
    float z = x - y;
    printf("Fractional part of it is%f",z);
    return 0;
}