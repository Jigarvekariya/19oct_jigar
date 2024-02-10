#include<stdio.h>
char name[100],address[100];
int id;
void em()
{
    printf("enter employee id :");
    scanf("%d",&id);
    printf("enter employee name :");
    scanf("%s",&name);
    printf("enter employee address :");
    scanf("%s",&address);
}
void dis()
{
    printf("\n%s your id %d and address %s\n",name,id,address);
    printf("\n");
}
int main()
{
    for(int j=0;j<5;j++)
    {
       em();
       dis();
    }

    return 0;
}

