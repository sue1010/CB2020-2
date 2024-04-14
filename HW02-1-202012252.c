#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[100],temp;
	int len,i,j;
	
	printf("Enter your string: ");
	gets(str);

	len = strlen(str);

	printf("Input string: %s", str);
	printf("\n\n");

	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - i - 1; j++)
		{
			if (str[j] > str[j + 1])
			{
				temp = str[j];
				str[j] = str[j + 1];
				str[j + 1] = temp;
			}
		}
	}

	printf("Sorted input string: ");
	printf("%s", str);
	printf("\n \n");

	return 0;

}