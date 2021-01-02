#include <stdio.h>
#include <math.h>

#define ll long long

ll max(ll a, ll b)
{
    return a >= b ? a : b;
}

ll lrg_indx(ll *array, ll size)
{
    ll mx = 0, ind;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > mx)
        {
            mx = array[i];
            ind = i;
        }
    }
    return ind;
}

ll a[100009];
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int test;
    scanf("%d", &test);

    while (test--)
    {
        ll n, k, x[35] = {0}, nm[35] = {0}, m = 0;
        scanf("%lld %lld", &n, &k);

        for (int i = 0; i < n; i++)
        {
            int j = 0;
            ll t;
            scanf("%lld", &a[i]);
            t = a[i];
            while (t)
            {
                x[j++] += (t % 2);
                t /= 2;
                m = max(m, j);
            }
        }

        for (int i = 0; i < m; i++)
            x[i] *= pow(2, i);

        ll ans = 0;
        if (k > m)
        {
            for (int i = 0; i < k; i++)
                ans += (pow(2, i));
        }
        else
        {
            for (int i = 0; i < k; i++)
            {
                ll r = lrg_indx(x, m);
                nm[r] = 1;
                x[r] = 0;
            }
            for (int i = 0; i < m; i++)
            {
                if (nm[i])
                    ans += (pow(2, i));
            }
        }

        printf("%lld\n", ans);
    }

    return 0;
}