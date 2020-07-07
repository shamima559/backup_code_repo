#include <bits/stdc++.h>

using namespace std;

int a[35][3];
int main()
{
    int n;
    scanf("%d", &n);

    int c = 0;
    for (int i = 0; i < n; i++)
        scanf("%d %d", &a[i][0], &a[i][1]);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i][0] == a[j][1])
                c++;
            if (a[i][1] == a[j][0])
                c++;
        }
    }

    printf("%d", c);

    return 0;
}