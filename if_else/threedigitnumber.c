#include<stdio.h>
int main(){                            //'&&' operator
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n>99 && n<1000){          // 99<n<1000
        printf("It's a three digit number");
    }                                             // '&&' ka mtlb hain ki 2 condition sach honi chahiye
    else{
        printf("It's not a three digit number");
    }
    
    return 0;
}
