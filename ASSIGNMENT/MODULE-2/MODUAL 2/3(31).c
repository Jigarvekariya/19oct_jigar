
#include<stdio.h>

int main()
{
    int m,year;
    printf("Enter Months");
    scanf("%d",&m);

    if(m<=12)
    {
        if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
        {
            printf("31 DAYS");
        }
        else if(m==2)
        {
            printf("Enter year");
            scanf("%d",&year);
            if((year%4)==0)
                {
                 printf("29 DAYS");
                }

            else
                {
                 printf("28 DAYS");
                }
        }

        else
                {
                printf("30 DAYS");
                }
            {

            }
    }
    printf("PLEASE ENTER VALID INPUT");
    return 0;
}

