#include<stdio.h>  //**//

int main(){
    int a;
    printf("Enter a:");
    scanf("%d",&a);
    int b;
    printf("Enter b:");
    scanf("%d",&b);
    int temp;
    temp = a;
    a = b;
    b = temp;
    // a = a + b;
    // b = a - b;
    // a = a - b;
    printf(" a = %d\n",a);
    printf("b = %d\n",b);


    
    return 0;
}
