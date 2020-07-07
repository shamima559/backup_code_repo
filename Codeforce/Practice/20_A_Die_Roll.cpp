#include <bits/stdc++.h>

using namespace std;

int main()
{
    int y, w;
    scanf("%d %d", &y, &w);

    int numer = 6 - max(y, w) + 1, deno = 6;
    for (int i = 1; i <= 6; i++)
    {
        if (numer % i == 0 && deno % i == 0)
            numer /= i, deno /= i;
    }

    printf("%d/%d", numer, deno);

    return 0;
}