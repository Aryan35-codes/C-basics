// #include<stdio.h>  //LINEAR SEARCH
// int main(){
//     int arr[7] = {14,86,7,5,22,45,9};
//     int x = 4;
//     for(int i=0;i<7;i++){// agar 2-3 element similar ho aur bola jaaye ki last index do tab loop ko ulta chala do(i.e.,i=7;i>=0;i--)
//         if(arr[i]==x){
//             printf("%d is present in the array and its index is %d \n",x,i);
//             break;
//         }
//         else printf("%d is not present in the array",x);
//         break;
//     }
//     return 0;
// }
// BOOLEAN METHOD
#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int x = 4;
    int idx = 0;
    bool flag = false; // false means not present
    for(int i=0;i<7;i++){
        if(arr[i]==x){
            flag = true; // true means present
            idx = i;
            break;
        }
    }
    if(flag==false){
        printf("%d is not present in the array",x);
    }
    else{
        printf("%d is present in the array and its index is %d",x,idx);
    }
    
    return 0;
}