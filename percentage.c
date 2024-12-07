#include<stdio.h>
int main(){
    float m1 = 40; // maths marks 
    float m2 = 38; // physics marks
    float m3 = 36; // chemistry marks
    float m4 = 32; // english marks
    float m5 = 40; // stats marks
    float p = ((m1+m2+m3+m4+m5)/200)*100; // total percentage
    printf("PERCENTAGE OF 5 SUBJECTS:%f",p);
    return 0;
}