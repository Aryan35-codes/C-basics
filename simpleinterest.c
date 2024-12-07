#include<stdio.h>
int main(){
    float principal,rate,time,si; // 4 dabbe create ho jaate
    printf("ENTER PRINCIPAL AMOUNT:");
    scanf("%f",&principal);
    printf("ENTER RATE OF INTEREST:");
    scanf("%f",&rate);
    printf("ENTER TIME: ");
    scanf("%f",&time);
    si = (principal*rate*time)/100;
    printf("SIMPLE INTEREST IS: %f",si);
    return 0;
}