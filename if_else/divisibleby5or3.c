#include<stdio.h>
int main(){                            //'||' operator
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n%5==0  || n%3==0){          
        printf("The number is divisible by 5 or 3");
    }                                             // '||' ka mtlb hain ki dono mein se koi ek condition sachh 
    else{                                         //       honi chahiye.
        printf("The number is not divisible by 5 or 3");
    }
    
    return 0;
}
