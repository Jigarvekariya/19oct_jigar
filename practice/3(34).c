
#include<stdio.h>

int main()
{
    int m;
    printf("Enter Month Number");
    scanf("%d",&m);

    if(m==1)
        {
        printf("JANUARY");
        }
    else if(m==2)
    {
        printf("FEBRUARY");
    }
    else if(m==3)
    {
        printf("MARCH");
    }
    else if(m==4)
    {
        printf("APRIL");
    }
    else if(m==5)
    {
        printf("MAY");
    }
    else if(m==6)
    {
        printf("JUNE");
    }
    else if(m==7)
    {
        printf("JULY");
    }
    else if(m==8)
    {
        printf("AUGUST");
    }
    else if (m==9)
    {
        printf("SEPTREMBER");
    }
    else if (m==10)
    {
        printf("OCTOMBER");
    }
    else if (m==11)
    {
        printf("NOVEMBER");
    }
    else if(m==12)
    {
      printf("DECEMBER");
    }
    else
    {
        printf("PLEASE ENTER VALID MONTH NUMBER");
    }

    return 0;
}
