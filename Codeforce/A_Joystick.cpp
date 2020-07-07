#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a1, a2, c = 0;
    scanf("%d %d", &a1, &a2);

    if (a1 == 1 && a2 == 1)
    {
        printf("0\n");
        return 0;
    }

    while (a1 > 0 && a2 > 0)
    {
        if (max(a1, a2) == a1)
            swap(a1, a2);
        a1++;
        a2 -= 2;
        c++;
    }
    printf("%d\n", c);

    return 0;
}