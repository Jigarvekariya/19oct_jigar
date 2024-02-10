#include<stdio.h>
int max=0,i,j[50],b;
void mx()
{
    printf("enter array size :");
    scanf("%d",&b);
    for (i = 0; i < b; i++)
    {
        printf("enter number :");
        scanf("%d",&j[i]);
        if (j[i]>max)
        {
           max=j[i];
        }

    }
}
void pri()
{
    printf("%d is a max number",max);
}
int main()
{
    mx();
    pri();
    return 0;
}

