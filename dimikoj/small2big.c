#include <stdio.h>

int bubble_sort(int ch[], int n)
{
    int i, j, flag, s;
    for (j = 0; j < n; j++)
    {
        flag = 0;
        for (i = 0; i < n - 1 - j; i++)
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
    return ch[i];
}

int main()
{
    int n = 3, test, j;
    scanf("%d", &test);
    for (j = 0; j < test; j++)
    {
        int a[n], i;
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);

        a[n] = bubble_sort(a, n);

        printf("Case %d:", j + 1);
        for (i = 0; i < n; i++)
        {
            printf(" %d", a[i]);
        }
        printf("\n");
    }
}