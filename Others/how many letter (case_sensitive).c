#include <stdio.h>
#include <string.h>

int main()
{
	char ch[101];
	int i, j, k, n;

	scanf("%d", &n);

	for (j = 0; j < n; j++)
	{
		gets(ch);
		char a[260] = {0};
		for (i = 0; i < strlen(ch); i++)
		{
			a[ch[i]]++;
		}
		for (k = 0; k < 260; k++)
		{
			if (a[k] != 0)
				printf("The letter '%c' appears %d time(s) in the given name\n", k, a[k]);
		}
	}
}
