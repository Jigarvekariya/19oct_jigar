#include<stdio.h>

char a[50],b[50];
int i,j=0;
char force()
{
    printf("Enter first string:");
    gets(a);
    printf("Enter second string:");
    gets(b);
    for(i=0;i<=strlen(a);i++)
    {
        if(a[i]==b[i])
        {
            j++;

        }
    }
    if(i!=j)
        printf("string are not same");
    else{
        printf("string are same");
    }
}

int main()
{
force();
}
