#include<stdio.h>

int main()
{
    int number,a,b;
    printf("Enter Number");
    scanf("%d",&number);

    while(number !=0)
    {
        a=number%10;
        b=b*10+a;
        number/=10;

    }
            printf("%d",b);

    return 0;
}
