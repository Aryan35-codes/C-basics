#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of lines:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        for(int k=1;k<=i;k++){
            int a=k+64;
            printf("%c ",a);
        }
        printf("\n");
    }
    
    return 0;
}