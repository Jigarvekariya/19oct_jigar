#include<stdio.h>
int no;
int fu(int n)
{

        if(n==0)
        {
            return 1;
        }
        return n*fu(n-1);
}

int main()
{

     printf("enter number :");
        scanf("%d",&no);




    printf("factorial number=%d",fu(no));
    return 0;
}

