#include<stdio.h>
char str1[20],str2[20];
char st()
{
    printf("enter string:-");
    gets(str1);
    strcpy(str2,str1);
    printf("%s",str2);
}
int main()
{
    st();
    return 0;
}
