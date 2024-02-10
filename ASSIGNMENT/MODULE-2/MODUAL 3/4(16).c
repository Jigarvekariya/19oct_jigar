#include<stdio.h>

int main()
{
    int a=0 , sum=0 ,b;
    printf("Enter Natural Number");
    scanf("%d",&b);

    while(a !=b+1)
    {
        sum=a+sum;
        a++;
    }
    printf("sum=%d",sum);

    return 0;
}
