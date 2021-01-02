#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[5];
    scanf("%d %d %d %d", &a[1], &a[2], &a[3], &a[4]);
    getchar();

    char ch = '1';
    int sum = 0;
    while (scanf("%c", &ch))
    {
        if (ch == '\n')
            break;
        sum += a[ch - '0'];
    }

    printf("%d", sum);

    return 0;
}