#include <bits/stdc++.h>

using namespace std;

char S[200], T[200];
int main()
{
    // freopen("input.txt", "r", stdin);

    int C, j = 1;
    scanf("%d", &C);

    while (C--)
    {
        int s0 = 0, s1 = 0, t0 = 0, t1 = 0, q = 0, q0 = 0, q1 = 0, omil = 0, move = 0;
        scanf("%s %s", S, T);

        for (int i = 0; S[i] != '\0'; i++)
        {
            if (S[i] == '1')
                s1++;
            else if (S[i] == '0')
                s0++;
            else
                q++;

            if (S[i] == '?' && T[i] == '0')
                q0++;
            if (S[i] == '?' && T[i] == '1')
                q1++;

            if (T[i] == '1')
                t1++;
            else if (T[i] == '0')
                t0++;

            if (S[i] != '?' && S[i] != T[i])
                omil++;
        }

        if (s1 > t1)
        {
            printf("Case %d: -1\n", j++);
            continue;
        }
        if (s0 > t0)
        {
            move += (s0 - t0);
            omil -= (s0 - t0);
            s1 += (s0 - t0);
            s0 -= (s0 - t0);
        }

        if (omil % 2 && omil)
        {
            move += ((omil - 1) / 2);
            omil = 1;
        }
        else
        {
            move += (omil / 2);
            omil = 0;
        }

        omil += (abs(q1 - t1 + s1));
        move += (omil / 2 + q);

        printf("Case %d: %d\n", j++, move);
    }

    return 0;
}