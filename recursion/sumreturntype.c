#include<stdio.h>
int sum(int n){
    if(n==0 || n==1) return n;
    int recAns = n + sum(n-1);
    return recAns;
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int summation = sum(n);
    printf("%d",summation);
    return 0;
}