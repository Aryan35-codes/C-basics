#include<stdio.h>
int main(){
    int cp,sp;
    printf("Enter cost price:");
    scanf("%d",&cp);
    printf("Enter selling price:");
    scanf("%d",&sp);
    if(sp>cp){
        int p = sp-cp;  //profit
        printf("There has been a PROFIT of %d",p);
    }
     else if(sp<cp){       // meaning: ya fir agar
        int l = cp-sp;   // loss
        printf("There has been a LOSS of %d",l);
    }
    else{
        printf("No profit , no loss");
    }
    return 0;
}