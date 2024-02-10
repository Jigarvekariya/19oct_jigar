#include<stdio.h>

int main()
{
    int a,b,c=0,d=0;
   while(a<5)
   {
       printf("Enter Number");
       scanf("%d",&b);
       if(b%2==0)
       {
           c++;
       }
       else{
        d++;
       }
       a++;
   }
   printf("even %d",c);
   printf("odd %d",d);

    return 0;
}
