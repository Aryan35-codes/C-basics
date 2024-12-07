#include<stdio.h> //**//
#include<limits.h>
int main(){
    int arr[7] = {-1,-12,58,-7,6,19,-57};
    int max = INT_MIN; // sabse chota number in int data type
    for(int i=1;i<7;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("%d",max);
    return 0;
 }
 // INT_MIN -> sabse chota no. <limits.h> likhne pe ata hain