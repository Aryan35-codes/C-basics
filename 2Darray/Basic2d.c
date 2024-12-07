#include<stdio.h>
int main(){
    // 1 2 6
    // 3 4 5
    int arr[2][3] = {{1,2,6},{3,4,5}};//(or) {1,2,6,3,4,5}
    //[2]-> no of rows,   [3]-> no of columns
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    // arr[0][0] = 1;
    // arr[0][1] = 2;
    // arr[1][0] = 3; 
    // arr[1][1] = 4;
   
    return 0;
}