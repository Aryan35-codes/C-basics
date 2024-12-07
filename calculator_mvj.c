#include <stdio.h>

int main(){
    int a,b,choice;

    printf("1.add\n2.subtract\n3.multiply\n4.divide\n");
    printf("Enter your choice : "); 
    scanf("%d",&choice);

    if(choice > 4){
        printf("Choice is invalid");
    }

    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);

    if(choice == 1){
        printf("Sum = %d",a + b);
    }

    else if(choice == 2){
        printf("Difference = %d",a - b);
    }

        else if(choice == 3){
        printf("Product = %d",a * b);
    }
    
        else if(choice == 4){
            if(b == 0){
                printf("INVALID");
            }
        printf("Quotient = %d",a / b);
    }
    
    return 0;
}