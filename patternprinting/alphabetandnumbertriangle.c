// #include<stdio.h>   // INCOMPLETE
// int main(){
//     int n;
//     char ch = 'A';
//     printf("Enter a number:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             if(j%2==0){
//                 printf("%d",j);
//             }
//             else {
//                 printf("%c",ch++);
//             }
            
//         }
//         printf("\n");
//     }
//         return 0;
// }
#include <stdio.h>

int main() {
    int i, j, n;
    char k = 'A';

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            if (j % 2 == 0) {
                printf("%d ", j);
            } else {
                printf("%c ", k++);
            }
        }
        printf("\n");
    }
    return 0;
}
