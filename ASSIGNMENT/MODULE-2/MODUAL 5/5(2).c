#include<stdio.h>

int main()
{
    char str[100],i=0;
    printf("Enter string");
    gets(str);
for(i=0;i<=strlen(str);i++)
    {
        printf("%c ",str[i]);

    }

}
