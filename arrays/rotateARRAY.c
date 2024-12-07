#include<stdio.h> //**//
void reverse(int arr[],int si,int ei){
    for(int i=si,j=ei;i<j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main(){
    int n ;
    printf("Enter size of an array:");
    scanf("%d",&n);
    int arr[n];
    int k ;
    printf("Enter no of rotations:");
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        printf("Enter %dth element:",i+1);
        scanf("%d",&arr[i]);
    }
     for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    // steps
    k = k % n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}