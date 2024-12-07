#include<stdio.h>    // ELSE-IF
int main(){
    int n;
    printf("Enter your percentage:");
    scanf("%d",&n);
    // more than 80 -> A
    // more than 60 -> B
    // more than 40 -> C
    // less than 40 -> D
    
    // if(n>80){                // if-else ladder
    //     printf("A grade");
    // }
    // else if(n>60){
    //     printf("B grade");
    // }
    // else if(n>40){
    //     printf("C grade");
    // }
    // else if(n<=40){
    //     printf("D grade");
    // }
    if(n>80){                
         printf("A grade");
       }
       else{
        if(n>60){    // 80>n>60
            printf("B grade");
        }
        else{
            if(n>40){  // 60>n>40
                printf("C grade");
            }
            else{
                if(n<=40){
                    printf("D grade");
                }
            }
        }
       }
      
    return 0;
}