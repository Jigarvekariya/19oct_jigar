#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter Number");
    scanf("%d",&a);
    if(a>10)
    {
        b=a%10;
        while (a>=10)
        {
            a=a/10;
        }
    }
    a=a+b;
    printf("Frist & last digit sum is=%d",a);

    return 0;
}
