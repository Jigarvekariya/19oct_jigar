#include<stdio.h>
int a,b,m;
char s;
void ev()
{
    printf("enter two values:-");
    scanf("%d%d",&a,&b);
    printf("chose +,-,*,/:-");
    scanf("%s",&s);
}
void cal()
{
    switch (s)
    {
    case '+':
        m=a+b;
        break;
    case '-':
        m=a-b;
        break;
    case '*':
        m=a*b;
        break;
    case '/':
        m=a/b;
    }
}
void pri()
{
    printf("%d%c%d=%d",a     ,s,b,m);
}
int main(int argc, char const *argv[])
{
    ev();
    cal();
    pri();
    return 0;
}
