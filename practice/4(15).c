#include<stdio.h>
int main()
{
    int sum=0,a,i=0;
    while (i<10)
    {
        printf("enter number:-");
        scanf("%d",&a);
        sum=sum+a;
        i++;
    }

    printf("sum =%d",sum);

    return 0;
}
