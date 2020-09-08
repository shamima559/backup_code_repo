#include <bits/stdc++.h>

using namespace std;

char arr[50];
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n;
    scanf("%d", &n);

    int p = 4;
    while (p--)
        scanf("%s", arr);

    for (int i = 1; i <= n; i++)
    {
        if (arr[4 * i - 3] == '*')
            printf("1");
        else if (arr[4 * i - 4] == '*')
            printf("2");
        else if (arr[4 * i - 2] == '*')
            printf("3");
    }
    printf("\n");
    scanf("%s", arr);

    return 0;
}