#include <stdio.h>
#include <string.h>

int main()
{
	char str[100],str1[100],a;

	printf("enter String : ");
    gets(str);
    str1[100]=str[100];
	int len = strlen(str);

	for (int i = 0, j = len - 1; i <= j; i++, j--) {
		a= str[i];
		str[i] = str[j];
		str[j] = a;
	}
    printf("Reversed String: %s", str);
    if (str1==str)
    {
        printf("\n string is palindrome");
    }
    else
    {
        printf("\n string is not palindrome");
    }



	return 0;
}

