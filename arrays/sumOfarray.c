#include<stdio.h>
int main(){
    int arr[5] = {4,8,12,16,20};
    int sum = 0;
    for(int i=0;i<5;i++){
        sum = sum + arr[i];
    }
    printf("Sum of elements of array is : %d",sum);
    return 0;
}