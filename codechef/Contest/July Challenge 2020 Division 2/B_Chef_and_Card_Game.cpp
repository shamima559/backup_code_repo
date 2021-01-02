#include <bits/stdc++.h>

using namespace std;

int digit_sum(int number)
{
    int sum = 0;
    while (number)
        sum += (number % 10), number /= 10;
    return sum;
}

int main()
{
    //freopen("input.txt", "r", stdin);
    int test;
    scanf("%d", &test);

    while (test--)
    {
        int n;
        scanf("%d", &n);

        int a, b, chef = 0, morty = 0;
        while (n--)
        {
            scanf("%d %d", &a, &b);
            if (digit_sum(a) > digit_sum(b))
                chef++;
            else if (digit_sum(a) < digit_sum(b))
                morty++;
            else
                chef++, morty++;
        }
        if (chef > morty)
            printf("0 %d\n", chef);
        else if (chef < morty)
            printf("1 %d\n", morty);
        else
            printf("2 %d\n", chef);
    }

    return 0;
}