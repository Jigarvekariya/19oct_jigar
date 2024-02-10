#include<stdio.h>
int main()
{
    int i,array[100],size;
    printf("enter size of array :");
    scanf("%d",&size);
    for ( i = 0; i < size; i++)
    {
        printf("enter array values :");
        scanf("%d",&array[i]);
    }
    for (i = size-1; i >=0; i--)
    {
        printf("revers oder array is[%d]%d\n",i,array[i]);
    }


    return 0;
}

