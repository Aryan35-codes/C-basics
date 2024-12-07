#include<stdio.h>
int main(){                    //Interesting question          
    int a,b,c;
    printf("Enter first side:");
    scanf("%d",&a);
    printf("Enter second side:");
    scanf("%d",&b);
    printf("Enter third side:");
    scanf("%d",&c);
    if((a+b)>c && (b+c)>a && (a+c)>b){
        printf("Valid triangle");
    }
    else{
        printf("Invalid triangle");
    }
    return 0;
}