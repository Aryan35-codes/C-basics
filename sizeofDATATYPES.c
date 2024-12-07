#include<stdio.h>
int main(){
    short x = 3 * 10000 + 2768;
    printf("%d",x);
    return 0;
}// 'short' ek chota dabba hain 
  // which ranges from -32768 to +32767
 
  // short -2^15 to 2^15-1
  // int -2^31 to 2^31-1
  //long long -2^63 to 2^63-1
  // char -2^7 to 2^7-1