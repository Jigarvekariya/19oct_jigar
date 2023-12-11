#include<stdio.h>
int main(int argc, char const *argv[])
{
    int m,s,h;
    printf("enter minute");
    scanf("%d",&m);
    h=m/60;
    s=m*60;
    printf("minutes to hours=%d\n",h);
    printf("minutes to second=%d",s);
    return 0;
}
