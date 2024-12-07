#include<stdio.h>
 int main(){
//     int arr[4];
//     arr[0] = 1;
//     printf("Enter last element:");
//     scanf("%d",&arr[1]);
//     printf("%d",arr[1]);
    // int arr[5] = {2,4,6,8,10}; // 5 dabbe create ho gaye
    // arr[4] = 100; //{2,4,6,8,100}
    // arr[1] = 5; // {2,5,6,8,100}
    // printf("%d",arr[1]);
    // float a[3] = {1.2,3.4,5.7};
    // printf("%f",a[2]);
    // char b[4] = {'a','r','%','*'};
    // printf("%c",b[0]);
     // int arr[5] = {2,4,6,8,10};
    // for(int i=0;i<5;i++){
    //     printf("%d\n",arr[i]);
    // } 
    int arr[6];
        for(int i=0;i<6;i++){
            printf("\nEnter %dth element:",i+1);
            scanf("%d",&arr[i]);
            printf("%d\n",arr[i]);
        }
    return 0;
}