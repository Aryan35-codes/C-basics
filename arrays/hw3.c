#include<stdio.h>
int main(){
    int arr[7] = {2,4,6,8,10,12,14} , x = 4;
    int count = 0;
    for(int i=0;i<=6;i++){
        if(arr[i]>x)
        count = count + 1;
    }
    printf("%d",count);
    return 0;
}