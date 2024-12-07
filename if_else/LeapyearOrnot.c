#include<stdio.h>
int main(){
    int a;
    printf("Enter any year:");
    scanf("%d",&a);
    if(a%4==0){
        printf("It's a Leap year");
    }
    else{
        printf("It's not a Leap year");
    }
    return 0;
}