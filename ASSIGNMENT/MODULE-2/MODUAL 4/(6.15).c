#include<stdio.h>
int no[100],i=0,j,t,a;
int arr()
{
    printf("enter size of array");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        printf("enter number");
        scanf("%d",&no[i]);
    }
}
int asc()
{
    for (i = 0; i < a; i++)
    {
         for (j = i+1; j < a; j++)
            {
                if (no[i]>no[j])
                {
                    t=no[i];
                    no[i]=no[j];
                    no[j]=t;
                }
            }
    }

    for (i = 0; i<a; i++)
    {
       printf("%d ",no[i]);
    }

}
int main()
{

    arr();
    asc();
    return 0;
}

