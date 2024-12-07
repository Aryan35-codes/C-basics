#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
   // printf("Hello PW");
   // SCOPE OF VARIABLES (ek variable ki value curly brackets ke andar simit rehti hain)
   int i;
   for( i=1;i<=n;i=i+1){
       printf("Hello World\n");
   }
   printf("%d",i);
    
    return 0;
}                                                   // 00:11:58 to 00:28:58
// Step 1:Check condition
// Step 2:Go inside loop
// Step 3:Updation