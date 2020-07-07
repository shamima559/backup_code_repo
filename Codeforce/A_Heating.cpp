#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);

    int n;
    scanf("%d", &n);

    while (n--)
    {
        int radiator, mn;
        scanf("%d %d", &radiator, &mn);

        int cost[10001];

        for (int i = 0; i < radiator; i++)
            cost[i] = 0;

        int sum = 0;
        while (sum < mn)
        {
            for (int i = 0; i < radiator; i++)
            {
                cost[i]++;
                sum++;
                if (sum == mn)
                    break;
            }
        }

        int result = 0;
        for (int i = 0; i < radiator; i++)
            result += (cost[i] * cost[i]);

        printf("%d\n", result);
    }
    return 0;
}