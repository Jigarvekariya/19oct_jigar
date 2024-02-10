#include<stdio.h>

int main()

{
    int j,k;




    for(j=1;j<=11;j++){
        for(k=1;k<=j;k++){
            printf(" * ");
        }
        printf("\n");
    }

    for(j=1;j<=11-1;j++){
        for(k=1;k<=11-j;k++){
            printf(" * ");
        }
        printf("\n");
    }

    return 0;
}
