#include<stdio.h> //**//
#include<limits.h>
int main(){
    int arr[7] = {100,584,264,213,548,446,897};
    int min = arr[0]; 
    for(int i=1;i<7;i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    printf("%d",min);
    return 0;
 }