#include <stdio.h>
#include <string.h>

int main()
{
	int i, j, test, count;
	char str[10000];

	scanf("%d\n", &test);

	for (i = 0; i < test; i++)
	{
		count = 0;
		gets(str);
		for (j = 0; j < strlen(str); j++)
		{
			if (str[j] == ' ' && str[j + 1] != ' ' && str[j + 1] != '\n')
				count++;
		}
		if (str[0] == '\n' || str[0] == ' ')
			count--;
		printf("%d\n", count + 1);
	}
}