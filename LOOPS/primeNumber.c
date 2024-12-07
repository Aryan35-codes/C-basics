#include<stdio.h>          //**// very important (break;)
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
//    for(int i=2;i<=n-1;i++){
//         if(n%i==0){       // 'i' is a factor of 'n'
//             printf("Composite number");
//             break;        // break is used to terminate the loop
//         }
//         else{
//             printf("Prime number");
//             break;
//         } 
                       // rounds of loop-> Iterations
    int a = 0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            a = 1;
            break;
        }
    }
    if(n==1 || n==0) printf("Neither prime nor composite");
    else if(a==0) printf("Prime number");
    else printf("Composite number");

    return 0;
}
