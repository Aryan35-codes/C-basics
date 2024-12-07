// adress of 1st element of array is said adress of whole array
// elements of array are stored continously(if u know address of 1st element of array u can find address of any element )
#include<stdio.h>
int main(){
    int arr[5] = {1,1,2,1,1};
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]);
    printf("%p\n",&arr[2]);
    printf("%p\n",&arr[3]);
    printf("%p\n",&arr[4]);
    return 0;
}
// HEXA DECIAMLS -> 0 1 2 3 4 5 6 7 8 9 a b c d e f(a to f are counted as continous numbers like 10 11...)ṇṇ