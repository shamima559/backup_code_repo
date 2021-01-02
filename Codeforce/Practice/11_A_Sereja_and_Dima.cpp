#include <bits/stdc++.h>

using namespace std;

int a[10000];
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    bool flag = true;
    int l = 0, r = n - 1, sereja = 0, dima = 0;
    while (l <= r)
    {
        if (flag)
        {
            if (a[l] > a[r])
                sereja += a[l++];
            else
                sereja += a[r--];
            flag = false;
        }
        else
        {
            if (a[l] > a[r])
                dima += a[l++];
            else
                dima += a[r--];
            flag = true;
        }
    }
    printf("%d %d", sereja, dima);

    return 0;
}