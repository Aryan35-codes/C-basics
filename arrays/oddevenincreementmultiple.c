#include<stdio.h>
int main(){
    int arr[7] = {2,4,6,8,10,12,14};
    for(int i=0;i<=6;i++){
        if(i%2!=0) arr[i]*=2;
        else arr[i]+=10;
    }
    for(int i=0;i<=6;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}