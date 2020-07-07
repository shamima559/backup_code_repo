#include <bits/stdc++.h>

using namespace std;

int main()
{
    int X, N;
    scanf("%d %d", &X, &N);

    if (N == 0)
    {
        printf("%d", X);
        return 0;
    }

    int p[110], t = 1;
    bool flag2 = false;

    for (int i = 0; i < N; i++)
        scanf("%d", &p[i]);

    for (int i = 0; i < N; i++)
    {
        if (X == p[i])
        {
            flag2 = true;
            break;
        }
    }
    if (!flag2)
    {
        printf("%d", X);
        return 0;
    }

    int check;
    bool flag = false;
    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0)
        {
            check = X - t;
            for (int j = 0; j < N; j++)
            {
                if (p[j] == check)
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
            {
                flag = false;
                continue;
            }
            else
            {
                printf("%d", check);
                return 0;
            }
        }
        else
        {
            check = X + t;
            for (int j = 0; j < N; j++)
            {
                if (p[j] == check)
                {
                    flag = true;
                    break;
                }
            }
            t++;
            if (flag)
            {
                flag = false;
                continue;
            }
            else
            {
                printf("%d", check);
                return 0;
            }
        }
    }

    return 0;
}