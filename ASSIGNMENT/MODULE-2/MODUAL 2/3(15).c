#include<stdio.h>

int main()
{
    int p,c,m;

    printf("Enter Your Marks");
    scanf("%d",&p);
    printf("Enter Your Marks");
    scanf("%d",&c);
    printf("Enter Your Marks");
    scanf("%d",&m);

    if(p>=55 && c>=50 && m>=65 && (p+c+m)>=190 &&(p+m)>=140)
        printf("The candidate is eligible.");
    else{
        printf("The Candidate is not eligible.");
    }

    return 0;
}
