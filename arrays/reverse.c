#include<stdio.h> //**//
void reverse(int arr[],int si,int ei){// reversing part of array
    // j = 7 - 1
   // while(i<=j)
    for(int i=si,j=ei;i<=j;i++,j--){
        //arr[i] and arr[j] swap
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main(){
    int arr[7] = {8,5,52,7,3,1,9};
    reverse(arr,0,6);
    // index 1 - 4 reverse 
    for(int i=0;i<7;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
//si-> starting index
//ei-> ending index