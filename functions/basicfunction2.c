#include<stdio.h>
void england(){ // void-> return type
    printf("You'r in England\n");//(6)
    return;//(7)
}
void australia(){
    printf("You'r in Australia\n"); //(4)
    england();//(5)
    return ;//(8)
}
void india(){
    printf("You'r in India \n");  // (2)
    australia(); // (3)
    printf("Everyone Welcome\n");//(9)
    return;//(10)
}
int main(){
    india();  // (1) jis fn ko call karre ho woh iske upar hona chahiye
    return 0;//(11)
}
