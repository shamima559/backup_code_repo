#include <stdio.h>

int larger(int x, int y, int z)
{
    if (y > x && y > z)
        return y;
    if (x > y && x > z)
        return x;
    if (z > x && z > y)
        return z;
}

int smaller(int x, int y, int z)
{
    if (y < x && y < z)
        return y;
    if (x < y && x < z)
        return x;
    if (z < x && z < y)
        return z;
}

int main()
{
    int test, x, y, z, i, small, large, sum, mid;
    scanf("%d", &test);

    for (i = 0; i < test; i++)
    {
        scanf("%d%d%d", &x, &y, &z);
        sum = x + y + z;
        small = smaller(x, y, z);
        large = larger(x, y, z);
        mid = sum - small - large;
        printf("Case %d: %d\n", i + 1, mid);
    }
    return 0;
}