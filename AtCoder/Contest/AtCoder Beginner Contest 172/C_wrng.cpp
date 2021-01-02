#include <bits/stdc++.h>

using namespace std;

int book[500000];
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m, k;
        scanf("%d %d %d", &n, &m, &k);

        for (int i = 0; i < n + m; i++)
            scanf("%d", &book[i]);

        sort(book, book + n + m);
        for (int i = 0; i < n + m; i++)
        {
            printf("%d ", book[i]);
        }
        cout << "\n";

        int c = 0, sum = 0, i = 0;
        while (sum < k && c <= n + m)
        {
            sum += book[i++];
            printf("%d ", sum);
            c++;
        }
        cout << "\n";
        if (sum > k)
            printf("%d\n", --c);
        else
            printf("%d\n", c);
    }

    return 0;
}