#include<stdio.h>
int main(){
    int x1 , y1 , x2 , y2 , x3 , y3;
    printf("Enter first co-ordinates:");
    scanf("%d %d",&x1,&y1);
    printf("Enter second co-ordinates:");
    scanf("%d %d",&x2,&y2);
    printf("Enter third co-ordinates:");
    scanf("%d %d",&x3,&y3);
     double m1 = (y2-y1)/(x2-x1), m2 = (y3-y2)/(x3-x2); // m1 and m2 are slopes
    if(m1==m2){
        printf("Points are co-linear");
    }
    else{
        printf("Points are'nt co-linear");
    }
}