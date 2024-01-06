#include<stdio.h>
int main()
{
    int j[100],n,m;
    printf("enter size of array");
    scanf("%d",&m);
    for (n = 0; n < m; n++)
    {
        printf("enter values[%d]:",n);
        scanf("%d",&j[n]);
    }
    for (n= 0; n< m; n++)
    {
        printf("array [%d]:%d\n",n,j[n]);
    }

}
