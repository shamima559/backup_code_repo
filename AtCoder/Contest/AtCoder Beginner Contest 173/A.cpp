#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);

    int n;
    scanf("%d", &n);

    if (n % 1000 == 0)
        printf("0");
    else
    {
        int t = (int)ceil(n * 1. / 1000);
        int ans = t * 1000 - n;
        printf("%d", ans);
    }

    return 0;
}