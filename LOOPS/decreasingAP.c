#include<stdio.h>
int main(){
    // int n;
    // printf("Enter a number:");
    // scanf("%d",&n);
     // 100 97 94 ........upto all positive integers
    // int a = 100;
    // for(int i=1;i<=n;i++){
    //     if(a>0)
    //     printf("%d ",a);
    //     a = a - 3;
    // }
    int a = 100;
    for(int i=1;a>0;i++){
        printf("%d \n",a);
        a = a - 3;
    }

    return 0;
}