#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);

    int n, b, d;
    scanf("%d %d %d", &n, &b, &d);

    int a, sum = 0, c = 0;
    while (n--)
    {
        scanf("%d", &a);
        if (a <= b)
            sum += a;
        if (sum > d)
            sum = 0, c++;
    }
    printf("%d", c);

    return 0;
}