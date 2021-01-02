#include <bits/stdc++.h>

using namespace std;

int coins[100];

void cumulative_sum(int size)
{
    for (int i = 1; i < size; i++)
        coins[i] += coins[i - 1];
}

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int i, n, left = 0, right = 0, c = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &coins[i]);

    if (n == 1)
    {
        printf("1\n");
        return 0;
    }
    else if (n == 2 && coins[0] == coins[1])
    {
        printf("2\n");
        return 0;
    }

    sort(coins, coins + n);
    cumulative_sum(n);

    left = 1, right = 0;

    for (i = 2; left >= right && i <= n; i++)
    {
        left = coins[n - i];
        right = coins[n - 1] - left;
        c++;
    }

    printf("%d\n", c);

    return 0;
}