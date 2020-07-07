#include <bits/stdc++.h>

using namespace std;

long long book[500000];
int main()
{
    long long n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);

    for (int i = 0; i < n + m; i++)
        scanf("%lld", &book[i]);

    sort(book, book + n + m);

    long long i = 0, sum = 0, c = 0;
    while (true)
    {
        sum += book[i++];
        if (sum > k || c == n + m)
            break;
        c++;
    }

    printf("%lld", c);

    return 0;
}