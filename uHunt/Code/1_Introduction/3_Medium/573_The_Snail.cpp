#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);

    int H, U, D, F;

    while (scanf("%d %d %d %d", &H, &U, &D, &F) && H != 0)
    {
        //H *= 10, U *= 10, D *= 10;
        int day = 0, dist = 0, climb = 0;

        while (dist >= 0 && dist <= H)
        {
            climb = U - ((U * F / 100.f) * day);
            day++;
            if (climb < 0)
                climb = 0;
            dist += climb;
            if (dist > H)
                break;
            dist -= D;
        }

        if (dist > H)
            printf("success on day %d\n", day);
        else
            printf("failure on day %d\n", day);
    }

    return 0;
}