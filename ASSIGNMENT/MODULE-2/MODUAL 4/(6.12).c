#include<stdio.h>
int i;
char c[100];
void name()
{
    for (i = 0; i < 5; i++)
    {
        printf("\n Enter Students Name :");
        gets(c);
        printf("students name :");
        puts(c);
    }
}
int main()
{
    name();
    return 0;
}
