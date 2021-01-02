#include <bits/stdc++.h>

using namespace std;
#define ll long long

/* ll GcD(ll num1, ll num2)
{
    ll ans;
    for (ll i = 1; i <= max(num1, num2); i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
            ans = i;
    }
    return ans;
} */

ll GcD(ll n, ll m)
{
    ll gcd, remainder;

    while (n != 0)
    {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    gcd = m;

    return gcd;
}

int main()
{
    ll num, deno;

    while (scanf("%lld %lld", &num, &deno))
    {
        ll d = GcD(num, deno);
        if (deno / d != 1)
            printf("%lld/%lld\n", num / d, deno / d);
        else
            printf("%lld\n", num / d);
    }

    return 0;
}