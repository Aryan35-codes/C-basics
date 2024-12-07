#include<stdio.h>
int main(){
    int n,r;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter r:");
    scanf("%d",&r);
    for(int i=0;i<=n;i++){
        int first = 1;
        for(int j=0;j<=i;j++){
            first = first * (i-j)/(j+1);//iC(j+1)
            printf("%d",first);
        }
        printf("\n");
    }
    return 0;
}