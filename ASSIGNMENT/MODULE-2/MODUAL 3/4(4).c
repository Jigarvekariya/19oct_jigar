#include<stdio.h>

int main()
{
    int i,j,k;
    printf("Enter Table Number");
    scanf("%d",&j);

    for(i=1;i<=10;i++){
        k=j*i;
        printf("%d*%d=%d\n",i,j,k);
    }
    return 0;
}
