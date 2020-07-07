#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[5], c = 0;

    for (int i = 0; i < 5; i++)
    {
        c++;
        scanf("%d", &a[i]);
        if (a[i] == 0)
        {
            printf("%d", c);
            break;
        }
    }

    return 0;
}