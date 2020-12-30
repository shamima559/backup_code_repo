#include <bits/stdc++.h>

using namespace std;

char a[2000006];
int main()
{
    // freopen("input.txt", "r", stdin);

    int L;

    while (scanf("%d", &L) && L)
    {
        scanf("%s", a);

        int mn = INT_MAX, d = 0;
        bool R = false, D = false, flag = false;
        for (int i = 0; a[i] != '\0'; i++)
        {
            if (a[i] == 'Z')
            {
                mn = 0;
                break;
            }
            else if (a[i] == 'R')
            {
                if (R && !D)
                    d = 0;
                if (D)
                {
                    D = false;
                    d++;
                    mn = min(mn, d);
                    d = 0;
                }
                R = true;
                flag = true;
            }
            else if (a[i] == 'D')
            {
                if (D && !R)
                    d = 0;
                if (R)
                {
                    R = false;
                    d++;
                    mn = min(mn, d);
                    d = 0;
                }
                D = true;
                flag = true;
            }
            else if (flag)
                d++;
        }
        printf("%d\n", mn);
    }

    return 0;
}