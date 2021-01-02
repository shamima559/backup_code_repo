#include <stdio.h>
#include <string.h>

int main()
{
	//freopen("input.txt", "r", stdin);
    //freopen("output1.txt", "w", stdout);
	int i, j, test, count;
	char str[10000], c;

	scanf("%d", &test);
	getchar();

	for (i = 0; i < test; i++)
	{
		count = 0;
		fgets(str, sizeof(str), stdin);
		for (j = 0; j < strlen(str) - 1; j++)
		{
			if (str[j] == ' ' && str[j + 1] != ' ' && str[j + 1] != '\n')
				count++;
		}
		if (str[0] == ' ' || str[0] == '\n')
			count--;
		printf("%d\n", count + 1);
	}
}