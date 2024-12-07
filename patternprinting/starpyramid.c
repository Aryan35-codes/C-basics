#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of lines:");
    scanf("%d",&n);
    int nst=1;        // nst => no. of stars
    int nsp = n-1;    // nsp=> no. of spaces
    for(int i=1;i<=n;i++){
        for(int k=1;k<=nsp;k++){ // for spaces
            printf(" ");
        }
        nsp--;
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        nst = nst + 2;
         printf("\n");
    }
    return 0;
}