#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    int t, c = 0, sum = 0;
    while (n--)
    {
        scanf("%d", &t);
        sum += t;
        if (sum < 0)
        {
            c++;
            sum = 0;
        }
    }
    printf("%d", c);

    return 0;
}