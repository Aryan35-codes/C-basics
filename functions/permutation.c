#include<stdio.h>   //**//
int factorial(int x){
    int fact = 1;
    for(int i=1;i<=x;i++){
        fact = fact * i;
    }
    return fact;
}
 int permutation(int n, int r){
    int npr = factorial(n)/factorial(n-r);
    return npr;
    }

int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int r;
    printf("Enter r:");
    scanf("%d",&r);
    int npr = permutation(n,r);// (n,r)-> pass by values
    printf("%d",npr);
    return 0;
    
}
// scope of variable-> {} ke andar ka masala, {} andar hi kaam karta hain
// n & r formal parameters hain aur inke values actual parameters hain..