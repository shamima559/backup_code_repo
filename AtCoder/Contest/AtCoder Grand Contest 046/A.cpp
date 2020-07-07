#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    scanf("%d", &x);

    int deg = x, c = 1;
    while (deg % 360)
    {
        deg += x;
        c++;
    }
    printf("%d", c);

    return 0;
}