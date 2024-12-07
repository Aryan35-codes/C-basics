#include<stdio.h>
void fun(int x[]){
    int temp = x[0];
    x[0] = x[1];
    x[1] = temp;
    return;
}
int main(){
    int arr[2] = {4,8};
    printf("%d %d\n",arr[0],arr[1]);
    fun(arr);// it shares address of 1st element of an array
    printf("%d %d\n",arr[0],arr[1]);
    return 0;
}