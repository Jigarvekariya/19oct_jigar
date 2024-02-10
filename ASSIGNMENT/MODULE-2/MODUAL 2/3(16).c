
#include<stdio.h>

int main()
{

    int t;
    printf("Enter Temperature");
    scanf("%d",&t);

    if(t<0){
        printf("Freezing weather");
    }
    else if(t<10){
        printf("Very cold weather");
    }
    else if (t<20){
        printf("Cold weather");
    }
    else if(t<30){
        printf("Normal Temperature");
    }
    else if(t<40){
        printf("Hot Temperature");

    }
    else if(t>=40){
        printf("Its Very Hot Temperature");
    }
    return 0;
}
