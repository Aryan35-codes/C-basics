#include<stdio.h>
int factorial(int n){
    // int fact = 1;
    // for(int i=2;i<=n;i++){
    //      fact = fact * i;
    // }
    if(n==1 || n==0) return 1; // base case
    int recAns = n*factorial(n-1); // yeh bas code ko acha dikhaane ke liye
    return recAns;
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int fact = factorial(n);
    printf("%d",fact);
    return 0;
}