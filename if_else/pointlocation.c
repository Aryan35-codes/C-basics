#include<stdio.h>
int main(){
    int x,y;
    printf("Enter co-ordinates:");
    scanf("%d %d",&x,&y);
    if(x==0 && y==0){
        printf("Lies on origin");
    }
    else if(x==0){
        printf("Lies on y-axis");
    }
    else if(y==0){
        printf("Lies on x-axis");
    }
    else{
        printf("The point is on a plane ");
    }
    return 0;
}