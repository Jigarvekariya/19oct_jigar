#include<stdio.h>
int len;
char str[100];
int lenth()
{
    printf("enter string :");
    scanf("%s",str);
    for (int j = 0; str[j]!=0; j++)
    {
        len++;
    }
    printf("%d",len);

}
int main()
{
    lenth();
    return 0;
}

