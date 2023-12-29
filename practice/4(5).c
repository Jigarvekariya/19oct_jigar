#include<stdio.h>

int main()
{
    int i,j,k=1;
    printf("Enter Number");
    scanf("%d",&j);

    for(i=j;i>0;i--)
    {
        k = k*i;
    }
    printf("factorial Number %d",k);

    return 0;
}
