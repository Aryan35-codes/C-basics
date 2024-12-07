#include<stdio.h>
void increasing(int x,int n){ // Paramaterized //
    if (x>n) return; //->base case
    printf("%d\n",x);
    increasing(x+1,n); // ->recursive call
    return; //-> code
}
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    increasing(1,n);
    return 0;
}