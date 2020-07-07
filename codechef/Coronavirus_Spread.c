#include <stdio.h>

int max(int *array, int size)
{
	int mx = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] > mx)
			mx = array[i];
	}
	return mx;
}

int min(int *array, int size)
{
	int mn = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] < mn)
			mn = array[i];
	}
	return mn;
}

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int test, n;

	scanf("%d", &test);

	while (test--)
	{
		int count[10] = {0}, i = 0, j = 0, temp = 0, c;
		scanf("%d", &n);
		int x[n];
		for (i = 0; i < n; i++)
			scanf("%d", &x[i]);

		while (temp < n)
		{
			c = 1;
			for (i = temp; (x[i + 1] - x[i] <= 2) && (i < n - 1); i++)
				c++;

			count[j++] = c;
			temp = i + 1;
		}
		printf("%d %d\n", min(count, j), max(count, j));
	}

	return 0;
}