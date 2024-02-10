#include<stdio.h>

int main()
{
    int i,a=0,b=1,c,d,e=1;
    printf("Enter Number");
    scanf("%d",&d);

    for(i=0;i<d;i++){
        c=a+b;
        a=b;
        b=c;
        printf("Fibonacci series %d\n",c);
        printf("%d",e);
        e++;
    }


return 0;

}
