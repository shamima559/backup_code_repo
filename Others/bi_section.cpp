#include <bits/stdc++.h>

using namespace std;

double mysqrt(int n);

int main()
{
    //freopen("input.txt","r",stdin);

    int n;
    while (scanf("%d", &n) != EOF)
        printf("%lf\n", mysqrt(n));

    return 0;
}

double mysqrt(int n)
{
    double start = 0, end = (double)n;
    double mid;
    int it = 64;

    while (it--)
    {
        mid = (start + end) / 2;
        if (mid * mid > (double)n)
            end = mid;
        else
            start = mid;
    }

    return mid;
}