#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ll n;

    while (scanf("%lld", &n) != EOF)
    {
        if (n)
        {
            int number[20], i;
            for (i = 0; n; i++)
            {
                number[i] = n % 9;
                n /= 9;
            }
            for (int j = i - 1; j >= 0; j--)
                printf("%d", number[j]);

            printf("\n");
        }
        else
            printf("0\n");
    }

    return 0;
}
