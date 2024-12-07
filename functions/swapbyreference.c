#include<stdio.h>  //** , PASS BY REFERENCE//
void swap(int *x,int *y){
    int temp = *x; // temp = a,*x ka mtlb x ke andar jiska adress hain uss adress pe jo value hain woh
    *x = *y; // a changed, a = b
    *y = temp; // b = temp
    return;
}
int main(){
    int a;
    printf("Enter a:");
    scanf("%d",&a);
    int b;
    printf("Enter b:");
    scanf("%d",&b);
    swap(&a,&b);
    printf("a = %d\n",a);
    printf("b = %d",b);
    return 0;
}
// lec 5(2:40:00)