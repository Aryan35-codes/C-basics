#include<stdio.h>
int main(){
    int l,b;
    printf("Enter length of rectangle :");
    scanf("%d",&l);
    printf("Enter breadth of rectangle :");
    scanf("%d",&b);
    int A = l * b, P = 2 * (l+b);
    if(A>P){
        printf("Area is greater than Perimeter");
    }
    if(A<P){
        printf("Area is lesser than Perimeter");
    }
    if(A==P){
        printf("Area is equal to Perimeter");
    }
    return 0;
}