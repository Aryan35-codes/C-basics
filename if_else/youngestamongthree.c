#include<stdio.h>
int main(){
    int r,s,a;
    printf("Enter Ram's age:");
    scanf("%d",&r);
    printf("Enter Sham's age:");
    scanf("%d",&s);
    printf("Enter Ajay's age:");
    scanf("%d",&a);
    if(r<s && r<a){
        printf("Ram is youngest");
    }
    if(s<r && s<a){
        printf("Sham is youngest");
    }
    if(a<s && a<r){
        printf("Ajay is youngest");
    }

    return 0;
}