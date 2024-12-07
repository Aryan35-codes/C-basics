#include<stdio.h>      // Garbage value
int main(){
    int j;
    printf("\n%d",j);    //jab 'j' ki koi value specified value nhi hain
    while(j<=10){        // ek random value ati hain jisse GARBAGE VALUE kehte hain
        printf("\n%d",j);
        j = j + 1;
    }
    int x=1;
    while(x==1){
        x = x - 1;
        printf("\n%d",x);
    }
    return 0;
    
}