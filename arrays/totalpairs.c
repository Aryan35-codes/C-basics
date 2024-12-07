#include<stdio.h>
int main(){
    int arr[8] = {31,1,6,13,12,7,8,11};
    int x = 19;
    int count = 0;
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            if(arr[i] + arr[j] == x) {
                count++;
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
    printf("%d",count);
}