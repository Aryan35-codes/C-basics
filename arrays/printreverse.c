#include<stdio.h>
int main(){
    int arr[5];

    for(int i=0;i<5;i++){
        printf("\nEnter %dth element:",i+1);
        scanf("%d",&arr[i]);
    }

    for(int j=4;j>=0;j--){
        printf("%d ",arr[j]);
    }
    return 0;
}