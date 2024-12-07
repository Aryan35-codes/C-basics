#include<stdio.h>      //**//
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){ // no of rows -> i
            printf("*");      //  no of columns -> j
        }
         printf("\n");
    }
        return 0;
}

// FOR ANY PATTERNS
// -> number of lines
// -> in each line what is happening 
// -> find relation between i & j