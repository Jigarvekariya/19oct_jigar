#include<stdio.h>
int no,a,b,c;
int enter()
{
    printf("enter number");
    scanf("%d",&no);
}

pl()
{
    c=no;
    for (no; no!=0;)
    {
        a=no%10;
        b=b*10+a;
        no=no/10;
    }

    if (c==b)
    {
        printf("%d is Palindrome",c);
    }
    else
    {
        printf("%d is not Palindrome",c);
    }


}
int main()
{
    enter();
    pl();
    return 0;
}

