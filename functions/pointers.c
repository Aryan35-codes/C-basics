//POINTERS -> variable ka adress store karne wala(ajeeb value jo file ke address mein dikhta hain)
#include<stdio.h>  //**//
int main(){
    int a = 25;
    int *x = &a; //-> pointer,int* -> int ka address store karta hain
    int **y = &x; // int**-> int* ka address store karta hain 
    //*x = 7;  //**//
    // printf("%p\n",&a);
    // printf("%p\n",x);// %p se address print hota hain
    // printf("%p\n",&x);
    // printf("%d",*x); 
   // printf("%d\n",a);
   printf("%p\n",&x);
   printf("%p\n",y);
   printf("%d\n",**y);
    return 0;
}
// lec 5:- (2:30:00) & (2:50:00)
// int** -> double pointer