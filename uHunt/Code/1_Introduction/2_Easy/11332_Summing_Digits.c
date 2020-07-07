#include <stdio.h>

int digit_sum(int n)
{
    int i, sum = 0, dgt[15];
    for (i = 0; n != 0; i++)
    {
        dgt[i] = n % 10;
        sum += dgt[i];
        n /= 10;
    }
    return sum;
}

int main()
{
    int n, i;

    while (scanf("%d", &n) && n != 0)
    {
        for (i = 0; n != digit_sum(n); i++)
        {
            n = digit_sum(n);
        }
        printf("%d\n", n);
    }
    return 0;
}