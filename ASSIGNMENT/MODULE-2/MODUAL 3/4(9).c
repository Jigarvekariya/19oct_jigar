#include<stdio.h>
int main()
{
    int s,p,a;
    printf("enter number");
    scanf("%d",&a);
    while (a!=0)
    {
        s=a%10;
        p=s+p;
        a=a/10;
    }
    printf("sum= %d",p);

    return 0;

}

