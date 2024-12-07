#include<stdio.h>
int main(){
    int marks[10];// = {95,90,31,25,100,50,15,89,97,30};
    for(int i=0;i<10;i++){
        printf("Enter marks:");
        scanf("%d",&marks[i])
        if(marks[i]<35){
        printf("%d ",i);
       }
    }
    int size = 10,b[size];
    b[2] = 6;
    printf("%d",b[2]);
      return 0;
}
