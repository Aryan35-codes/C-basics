#include<stdio.h>
void greet(){
    printf("Good Morning\n");
    printf("How are you\n");
    printf("bye\n");
    return;  // return -> khatam karna
}
int main(){ 
    greet();   // calling a function,greet()->is called call
    greet();
    greet();
        return 0;
}
// every programme starts with main function
// DRY-> do not repeat your code 