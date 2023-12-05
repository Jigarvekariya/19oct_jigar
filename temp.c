#include<stdio.h>

int main(){

   int j1,n1;
   printf("Enter the number 1:");
   scanf("%d",&j1);
   printf("Enter The number 2:");
   scanf("%d",&n1);
   if(j1<0 && n1>0)
    printf("True.");
   else
     printf("False.");
   return 0;
}
