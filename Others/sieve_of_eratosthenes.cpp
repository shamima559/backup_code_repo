#include <bits/stdc++.h>

int main()
{
	int n;

	puts("Enter the number to check if it is prime or not (enter -1 to exit):");
	while (scanf("%d", &n) && n != -1)
	{
		clock_t begin = clock();

		int prime[n + 1] = {};

		prime[0] = 1;
		prime[1] = 1;

		int limit = sqrt(n + 1);

		for (int i = 2; i <= limit; i++)
			if (prime[i] == 0)
				for (int j = 2; i * j <= n; j++)
					prime[i * j] = 1;

		if (prime[n] == 0)
			printf("YES\n");
		else
			printf("NO\n");

		clock_t end = clock();

		printf("%lf\n", (double)(end - begin) / CLOCKS_PER_SEC);
	}

	return 0;
}