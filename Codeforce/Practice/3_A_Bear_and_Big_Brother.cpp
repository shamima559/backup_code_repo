#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int c = 0;
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        c++;
    }
    printf("%d", c);

    return 0;
}