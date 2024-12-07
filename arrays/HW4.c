#include<stdio.h>
int main(){
    int arr[9] = {1,8,2,4,9,4,2,8,1};
    for(int i=0,j=6;i<=j;i++,j--){
        if(arr[i]==arr[j]){
            printf("it's a palindrome");
            break;
        }
        else{ printf("It's not a palindrome");
        break;
        }
    }
    return 0;
}