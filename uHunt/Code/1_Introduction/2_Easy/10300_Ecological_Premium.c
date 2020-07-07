#include <stdio.h>

int main()
{
    long long test, farmer, size, animal, en_frndlyns, net_premium;

    scanf("%lld", &test);

    while (test--)
    {
        net_premium = 0;
        scanf("%lld", &farmer);

        while (farmer--)
        {
            scanf("%lld%lld%lld", &size, &animal, &en_frndlyns);
            if (animal != 0)
                net_premium += size * en_frndlyns;
        }
        printf("%lld\n", net_premium);
    }

    return 0;
}