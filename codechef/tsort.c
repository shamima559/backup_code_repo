#include <stdio.h>

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t, i, j, flag, s;

    scanf("%d", &t);

    int ch[t];

    for (i = 0; i < t; i++)
        scanf("%d", &ch[i]);

    for (j = 0; j < t; j++)
    {
        flag = 0;
        for (i = 0; i < t - 1 - j; i++)
        {
            if (ch[i] > ch[i + 1])
            {
                s = ch[i];
                ch[i] = ch[i + 1];
                ch[i + 1] = s;
                flag = 1;
            }
        }
        if (flag == 0)
            break;
    }

    for (i = 0; i < t; i++)
        printf("%d\n", ch[i]);

    return 0;
}
