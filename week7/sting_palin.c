#include <stdio.h>
#include <string.h>
int main()
{
	char str[100];
	int i, len, c = 0;
	printf("enter a string:");
	gets(str);
	len = strlen(str);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != str[len - 1 - i])
		{
			c = 1;
			break;
		}
	}
	if (c == 1)
		printf("not a polidrone");
	else
		printf("polindrone");
}
