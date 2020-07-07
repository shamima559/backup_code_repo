#include <bits/stdc++.h>

using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);

	int L;
	while (scanf("%d", &L) && L != 0)
	{
		getchar();

		int pos = 0, neg = 0;
		char str[3], first[3];
		L -= 2;
		while (scanf("%s", first) && first[0] == 'N')
			L--;

		if (first[0] == '+')
			pos++;
		else if (first[0] == '-')
			neg++;

		while (L--)
		{
			scanf("%s", str);

			if (str[1] == first[1] && str[0] == '+')
				pos++;
			else if (str[1] == first[1] && str[0] == '-')
				neg++;
		}
		int net = pos - neg;
		if (net == 0)
			printf("+x\n");
		else if (net > 0)
		{
			if (net % 4 == 1)
				printf("+%c\n", first[1]);
			else if (net % 4 == 2)
				printf("-x\n");
			else if (net % 4 == 3)
				printf("-%c\n", first[1]);
			else
				printf("+x\n");
		}
		else
		{
			if (net % 4 == -1)
				printf("-%c\n", first[1]);
			else if (net % 4 == -2)
				printf("-x\n");
			else if (net % 4 == -3)
				printf("+%c\n", first[1]);
			else
				printf("+x\n");
		}
	}

	return 0;
}
