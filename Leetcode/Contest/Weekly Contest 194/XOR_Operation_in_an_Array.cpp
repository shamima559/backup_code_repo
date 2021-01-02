#include <bits/stdc++.h>

using namespace std;

int xorOperation(int n, int start)
{
    int ans = 0;
    for (int i = 0; i < n; i++, start += 2)
    {
        ans ^= start;
    }
    return ans;
}

int main()
{
    int n, start;
    while (scanf("%d %d", &n, &start))
        printf("%d\n", xorOperation(n, start));

    return 0;
}