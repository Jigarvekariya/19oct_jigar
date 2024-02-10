#include<stdio.h>
int no[100],j,i;
int arr()
{
    printf("enter size of array :");
    scanf("%d",&j);
    for (i = 0; i < j; i++)
    {
        printf("enter number :");
        scanf("%d",&no[i]);
    }
}
int eo()
{
    printf("EVEN NNUMBER IS :");
    for (i = 0; i < j; i++)
    {
        if (no[i]%2==0)
        {
            printf("%d ",no[i]);
        }
    }
    printf("\n");
    printf("ODD NUMBER IS :");
    for (i = 0; i < j; i++)
    {
        if (no[i]%2!=0)
        {
            printf("%d ",no[i]);
        }
    }
}
int main()
{
    arr();
    eo();
    return 0;
}

