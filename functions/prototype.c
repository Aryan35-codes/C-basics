#include<stdio.h>

int main(){
    void fun(); // its s function prototype
    fun();
    return 0;// fn prototype=> fn ke upar ya neeche rakhne se prblm nhi ata
}
void fun(){
    printf("Hello");
}