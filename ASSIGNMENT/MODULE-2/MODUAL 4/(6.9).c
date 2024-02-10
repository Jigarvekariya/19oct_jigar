#include<stdio.h>
struct india1{
	int a;
	float b;
};
union india2{
	int num;
	float num1;
}ve1;

int main()
{
	struct india1 v1;
	printf("enter number of a:");
	scanf("%d",&v1.a);
	printf("enter number of b:");
	scanf("%f",&v1.b);
	printf("\n structure x and y : %d  %.2f", v1.a, v1.b);
	ve1.num = 5;
	ve1.num1 = 10.4;
	printf("\n no of integer : %d",ve1.num);
	printf("\n no of float : %.2f",ve1.num1);
	return 0;
}

