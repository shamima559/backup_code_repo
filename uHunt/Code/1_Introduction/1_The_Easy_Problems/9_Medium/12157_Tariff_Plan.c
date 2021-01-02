#include <stdio.h>

int main()
{
    int test, i = 1, n, mile, juice, m, j;
    float call, c;

    scanf("%d", &test);
    while (test--)
    {
        mile = 0;
        juice = 0;

        scanf("%d", &n);
        while (n--)
        {
            scanf("%f", &c);

            call = c;
            call /= 30;
            if (call >= (int)call)
            {
                call = (int)call;
                call++;
                m = call * 10;
            }

            call = c;
            call /= 60;
            if (call >= (int)call)
            {
                call = (int)call;
                call++;
                j = call * 15;
            }

            mile += m;
            juice += j;
        }

        if (juice > mile)
            printf("Case %d: Mile %d\n", i++, mile);
        else if (mile > juice)
            printf("Case %d: Juice %d\n", i++, juice);
        else
            printf("Case %d: Mile Juice %d\n", i++, juice);
    }

    return 0;
}