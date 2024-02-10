#include<stdio.h>

int main()
{
    int i,j,k;

    for(i =1; i<=5;i++){
        //print the space
        for(j=1;j<=5-i;j++)
            printf(" ");
        //print the symbol
        for(k=1;k<=((2*i)-1);k++)
        printf("*");

        printf("\n");
    }

    return 0;
}
