#include <stdio.h>

int array[100000];

void cumulative_sum(int *array, int size)
{
	for (int i = 2; i <= size; i++)
		array[i] += array[i - 1];
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
	int t, i, s, li, ri;

	printf("enter the number of test case :");
	scanf("%d", &t);

	while (t--)
	{
		printf("size of the array :", s);
		scanf("%d", &s);

		printf("enter the element of the array :");
		for (i = 1; i <= s; i++)
			scanf("%d", &array[i]);

		cumulative_sum(array, s);

		printf("enter two position number to sum in between and enter -1 -1 to exit\n");
		while (scanf("%d %d", &li, &ri) && li != -1 && ri != -1)
			printf("ans = %d[sum till position %d] - %d[sum till position %d] = %d\n",
				   array[max(ri, li)], max(ri, li), array[min(ri, li) - 1], min(ri, li) - 1, array[max(ri, li)] - array[min(ri, li) - 1]);
	}

	return 0;
}