#include<stdio.h>  //**//
#include<limits.h>
int main(){
    int arr[7] = {8,17,2,25,23,4,25};
    int max = INT_MIN;
    int smax = INT_MIN;
    // for(int i=0;i<7;i++){
    //     if(max<arr[i]){
    //         max = arr[i];
    //     }
    // }

    // for(int i=0;i<7;i++){
    //     if(arr[i]!=max && smax<arr[i]){
    //         smax = arr[i];
    //     }
    // }
    for(int i=0;i<7;i++){
        if(max<arr[i]){
            smax = max; //smax is now previous max
            max = arr[i]; // max is now new max
        }
        else if(smax<arr[i] && max!=arr[i] ){
            smax = arr[i];
        }
    }

    printf("%d",smax);
    return 0;
}