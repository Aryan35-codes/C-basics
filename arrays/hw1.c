#include<stdio.h>
int main(){
    int arr[5] = {1,1,1,2,1};
    int product = 1;
    for(int i=0;i<5;i++){
        product = product * arr[i];
    }
    printf("Product of elements of array is : %d",product);
    return 0;
}