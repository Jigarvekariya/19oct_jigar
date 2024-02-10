#include<stdio.h>
int i,j,no[50][50],a;
int array()
{
    printf("size of array");
    scanf("%d",&a);
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            printf("enter number");
            scanf("%d",&no[i][j]);
        }

    }
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            printf("%d ",no[i][j]);
        }
        printf("\n");
    }

}
int main()
{
    array();

    return 0;
}


