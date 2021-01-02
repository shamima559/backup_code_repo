#include <stdio.h>

int main()
{
    int n, max, min, test, j;

    puts("Enter the no. of test:");
    scanf("%d", &test);
    for (j = 0; j < test; j++)
    {
        puts("Enter the size of the array:");
        scanf("%d", &n);
        int a[n], i;
        puts("Enter the element of the array");
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);

        max = a[0];

        for (i = 0; i < n; i++)
        {
            if (a[i] > max)
                max = a[i];
        }
        printf("MAX %d\n", max);

        min = a[0];
        for (i = 0; i < n; i++)
        {
            if (a[i] < min)
                min = a[i];
        }
        printf("MIN %d\n", min);
    }
}
