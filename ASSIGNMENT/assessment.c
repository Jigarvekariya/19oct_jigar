#include<stdio.h>
int no1,no2,c;
int menu() //SHOW MENU
{
    printf("---MENU---");
    printf("\n1 Addition \n2 Substraction \n3 Multiplication \n4 Division\n\n");
    printf("Enter your choice:");
    scanf("%d",&c); //GET CHOICE
}
int set()   //GET VALUES
{
    printf("\n Enter your First Number:");
    scanf("%d",&no1);
    printf("Enter you Second Number:");
    scanf("%d",&no2);
    printf("\n");
}
int add(int no1,int no2)    //ADDITION NUMBER
{
    return no1+no2;
}

int sub(int no1,int no2)    //SUBTRACTION   NUMBER
{
    return no1-no2;
}

int mul(int no1,int no2)    //MULTIPLICATION NUMBER
{
    return no1*no2;
}

int div(int no1,int no2)    //DIVISION NUMBER
{
    return no1/no2;
}
int choice()
{

    switch (c)  //SWITCH CASE
    {
        case 1:
            printf("Addition = %d",add(no1,no2));
            printf("\n");
            break;
        case 2:
            printf("Substraction = %d",sub(no1,no2));
            printf("\n");
            break;
        case 3:
            printf("Multiplicattion = %d",mul(no1,no2));
            printf("\n");
            break;
        case 4:
            printf("Division = %d",div(no1,no2));
            printf("\n");
            break;

            default:
            {
                printf("INVALID CHOICE !!!!");
            }
    }
}
int main()
{
    menu(); // FUNCTION MENU CALL
    if(c==0 || c>=5)
    {
        goto exit;
    }
    set();
    exit:
    choice();
    printf("\n---------------------------------------------------------------------");

    return 0;
}
