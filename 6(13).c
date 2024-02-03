#include<stdio.h>
#include<string.h>

int main()

{

    char str1[100],str2[100],i,j,l,m,k;
    printf("Input first string :");
    gets(str1);
    printf("Input second string:");
    gets(str2);

    l=strlen(str1);
    m=strlen(str2);

    for(i=0;i<l-1;i++)
        str1[i]=' ';
        i++;
    for(j=0;j<m-1;j++,i++)
    {
        str1[i]=str2[j];
    }
    k=strlen(str1);
    printf("After combine two string is : \n");
    for(i=0;i<k;i++)
    {
        printf("%c",str1[i]);
    }
    printf("\n\n");
    return 0;
}
