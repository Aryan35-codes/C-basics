#include<stdio.h>
int main(){
    int x = 4, y = 3,z;
    z = x-- -y;
    printf("\n%d %d %d ",x,y,z);  // x++ means use 'x' then increment (Post increment)
    return 0;                    // ++x means increment then use 'x' (Pre increment)
}