#include<stdio.h>

int main()
{
    int a,s,b;

    printf("Enter Your BUY Value");
    scanf("%d",&b);

    printf("Enter Your SELL Value");
    scanf("%d",&s);

    a=s-b;

    if(s<b){
        printf("LOSS");
    }
    else{
        printf("PROFIT");
    }

  return 0;

}
