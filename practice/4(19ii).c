#include<stdio.h>

int main()
{
    int i,j,a=65;
    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf(" %c",a);
            a++;
        }
        printf("\n");
    }

    return 0;
}
