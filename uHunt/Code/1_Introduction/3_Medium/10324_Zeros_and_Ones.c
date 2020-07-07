#include <stdio.h>
#include <string.h>

char *fgets_wrapper(char *buffer, size_t buflen, FILE *fp)
{
	if (fgets(buffer, buflen, fp) != 0)
	{
		buffer[strcspn(buffer, "\n")] = '\0';
		return buffer;
	}
	return 0;
}

int max(int a, int b)
{
	if (a >= b)
		return a;
	else
		return b;
}

int min(int a, int b)
{
	if (a <= b)
		return a;
	else
		return b;
}

int main()
{
	int q, s, e, c = 1, flag, i;
	char str[1000001], ch;

	while (fgets_wrapper(str, sizeof(str), stdin) && str[0] != '\0')
	{
		scanf("%d", &q);
		getchar();
		printf("Case %d:\n", c++);

		while (q--)
		{
			flag = 1;
			scanf("%d %d", &s, &e);

			ch = getchar();
			/*while (ch != '\n')
                ch = getchar();*/

			for (i = min(s, e); i <= max(s, e); i++)
			{
				if (str[s] != str[i])
				{
					flag = 0;
					break;
				}
			}
			if (flag == 0)
				printf("No\n");
			else
				printf("Yes\n");
		}
	}

	return 0;
}