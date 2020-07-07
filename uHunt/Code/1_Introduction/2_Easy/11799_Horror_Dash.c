#include <stdio.h>

int max(int arr[], int n)
{
    int temp, i;
    temp = arr[0];

    for (i = 0; i < n; i++)
    {
        if (arr[i] > temp)
            temp = arr[i];
    }
    return temp;
}

int main()
{
    int test, n, i, j = 1;

    scanf("%d", &test);

    while (test--)
    {
        scanf("%d", &n);
        int speed[n];

        for (i = 0; i < n; i++)
            scanf("%d", &speed[i]);

        printf("Case %d: %d\n", j, max(speed, n));
        j++;
    }

    return 0;
}