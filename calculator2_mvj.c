#include <stdio.h>

int main(){
    int a,b;
    char choice;
    printf("a.add\ns.subtract\nm.multiply\nd.divide\n");
    printf("Enter your choice : "); 
    scanf("%c",&choice);
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);

    if(choice == "a"){
        printf("Sum = %d",a + b);
    }
    else if(choice == "s"){
        printf("Difference = %d",a - b);
    }
        else if(choice == "m"){
        printf("Product = %d",a * b);
    }
        else if(choice == "d"){
            if(b == 0){
                printf("INVALID");
            }
        printf("Quotient = %d",a / b);
    }
    
    return 0;
}