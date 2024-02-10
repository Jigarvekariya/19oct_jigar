#include<stdio.h>
int no1,no2,m;
char s;
void ev()
{
    printf("enter two values :");
    scanf("%d%d",&no1,&no2);
    printf("chose one of this : +,-,*,/:-");
    scanf("%s",&s);
}
void cal()
{
    switch (s)
    {
    case '+':
        m=no1+no2;
        break;
    case '-':
        m=no1-no2;
        break;
    case '*':
        m=no1*no2;
        break;
    case '/':
        m=no1/no2;
    }
}
void pri()
{
    printf("%d%c%d=%d",no1,s,no2,m);
}
int main(int argc, char const *argv[])
{
    ev();
    cal();
    pri();
    return 0;
}

