#include <stdio.h>

int main()
{
    int test, n, i, j = 1;

    scanf("%d", &test);

    while (test--)
    {
        scanf("%d", &n);
        int height[n], high_jump = 0, low_jump = 0;
        for (i = 0; i < n; i++)
            scanf("%d", &height[i]);

        for (i = 0; i < n - 1; i++)
        {
            if (height[i] < height[i + 1])
                high_jump++;
            else if (height[i] > height[i + 1])
                low_jump++;
        }

        printf("Case %d: %d %d\n", j, high_jump, low_jump);
        j++;
    }
    return 0;
}