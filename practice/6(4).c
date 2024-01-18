#include<stdio.h>
char str[100];
int i,me=1;
char mega()
{
    printf("enter string:-");
    gets(str);
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i]==32)
        {
           me++;
        }
    }
    printf("%d",me);

}
int main()
{
    mega();
}
