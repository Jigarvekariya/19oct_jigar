#include<stdio.h>
int main()
{
    int a=0,b;
    printf("enter number");
    scanf("%d",&a);
    for (int i = 0; i <= a; i++)
    {
        b=b+(i+1);
    }
    printf("%d",b);
    return 0;
}

