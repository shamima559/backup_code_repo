#include <bits/stdc++.h>

using namespace std;

int device[30], amp[30];
int main()
{
    int n, m, c, k = 1;
    while (scanf("%d %d %d", &n, &m, &c) && n && m && c)
    {
        // if (k > 1)
        // printf("\n");
        printf("Sequence %d\n", k++);

        for (int i = 0; i < 30; i++)
        {
            device[i] = 0;
            amp[i] = 0;
        }

        for (int i = 1; i <= n; i++)
            scanf("%d", &amp[i]);

        int t, fuse, mx = 0;
        bool flag = true;
        for (int i = 1; i <= m; i++)
        {
            scanf("%d", &t);
            if (device[t])
                device[t] = 0;
            else
                device[t] = 1;
            if (flag)
            {
                fuse = 0;
                for (int j = 1; j <= n; j++)
                {
                    if (device[j])
                        fuse += amp[j];
                    if (fuse > c)
                    {
                        flag = false;
                        printf("Fuse was blown.\n");
                        break;
                    }
                    mx = max(mx, fuse);
                }
            }
        }
        if (flag)
        {
            printf("Fuse was not blown.\n");
            printf("Maximal power consumption was %d amperes.\n", mx);
        }
        printf("\n");
    }
    return 0;
}