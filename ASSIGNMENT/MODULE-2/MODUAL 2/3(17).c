#include<stdio.h>

int main()
{

    int a,b,c;
    printf("Enter triangle Value");
    scanf("d%d%d%",&a,&b,&c);

    if(a+b<=c||a+c<=b||b+c<=a){
        printf("This is a triangle");
    }
    else{
        printf("This is Not triangle");
    }

    return 0;
}
