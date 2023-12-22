#include<stdio.h>
int main(int argc, char const *argv[])
{
    int m,year;
    printf("enter months:-");
    scanf("%d",&m);\
    if (m<=12)
    {
        if(m==1 ||m==3|| m==5 ||m==7 ||m==8 ||m==10 ||m==12)
        {
            printf("DAYS=31");
        }
        else if (m==2)
        {
            printf("Enter Year:-");
            scanf("%d",&year);
            if ((year%4)==0)
            {
                printf("DAYS=29");
            }
            else
            {
                printf("DAYS=28");
            }
        }
        else
        {
            printf("DAYS=30");
        }
    }
    else
    {
        printf("ENTER VALID INPUT");
    }



    return 0;
}
