#include<stdio.h>
int main(){
    int r,s,a;
    printf("Enter Ram's age:");
    scanf("%d",&r);
    printf("Enter Sham's age:");
    scanf("%d",&s);
    printf("Enter Ajay's age:");
    scanf("%d",&a);
    if(r<s){      // Sham is out of race
        if(r<a)
        printf("Ram is youngest");
        else // a<r
        printf("Ajay is youngest");
    } 
    else { // Ram is out of race
        if(s<a)
        printf("Sham is youngest");
        else  // a<s
        printf("Ajay is youngest");
    }
    
    return 0;
}