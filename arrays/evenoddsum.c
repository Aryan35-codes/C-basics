#include<stdio.h>
int main(){
    int arr[7] = {8,2,1,7,7,2,2};
    int sumEven = 0;
    int sumOdd = 0;
    for(int i=0;i<=6;i++){
        if(i%2==0) sumEven+=arr[i];
        else sumOdd+=arr[i];
    }
    int sum = sumEven - sumOdd;
    printf("%d",sum);
    return 0;
}