#include<stdio.h>
int main()
{
    int array[50],array_size,i,sum=0;
    printf("enter size of array :");
    scanf("%d",&array_size);

    for (i = 0; i < array_size; i++)
    {
       printf("enter array values :");
       scanf("%d",&array[i]);
    }
    for (i = 0; i < array_size; i++)
    {
        sum=sum+array[i];
    }
    printf("sum of array is :%",sum);
    return 0;
}

