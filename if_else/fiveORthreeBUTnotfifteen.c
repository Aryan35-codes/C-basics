#include<stdio.h>              //**//
int main(){
     int n;
    printf("Enter a number:");
    scanf("%d",&n);
    // if(n%5==0  || n%3==0){ 
    //     if(n%15!=0){
    //      printf("The number is divisible by 5 or 3 but not 15");
    //     }   
    //     else{
    //         printf("The number is divisible by 15");
    //     }      
        
    // }      
    // else{
    //         printf("The number is not divisible by 5 or 3");
    //     }   
             // neeche wala wrong code hain, agar bracket na dala jaye toh    
    if((n%5==0 || n%3==0) && n%15!=0){      // This is concept of hirearchy
        printf("The number is divisible by 5 or 3 but not 15");
    }          // '&&' is more prioritized than '||'
    else{
        printf("The number is not matching the required condition");
    }
    return 0;                                      // 1:24:58 to 1:28:58
}
    // n = 7 (ek dabba banake usmein value assign karta hain)
    // n = 2 (7 nikaal ke 2 daal diya)
    // n == 2 (check karta hain if n ki value 2 hain ki nai)