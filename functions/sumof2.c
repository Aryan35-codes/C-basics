#include<stdio.h> // int -> return type
int add(int a,int b){ // (int a,int b)->arguements
    return a+b;
}
int main(){
    int a; // main fn. ke int a and int b alag hain upar ke fn. se
    printf("Enter first number:");
    scanf("%d",&a);
    int b;
    printf("Enter second number:");
    scanf("%d",&b);
    int sum = add(a,b);
    printf("%d",sum);
    return 0;
}

// void ka mtlb hota hain ntg so return kuch bhi nhi karna hota
// int ka mtlb integer hota hain isliye integer return karna hota hain
// char ka mtlb character hota hain isliye character return karna hota hain