#include <bits/stdc++.h>

using namespace std;

char str[1000000];
int cnt[1000000];
int main()
{
    // freopen("input.txt", "r", stdin);

    int test;
    scanf("%d", &test);

    while (test--)
    {
        scanf("%s", str);

        int index = 0, water = 0;
        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == '\\')
                cnt[index++] = i;

            if (str[i] == '/' && index)
            {
                index--;
                water += (i - cnt[index]);
            }
        }
        printf("%d\n", water);
    }

    return 0;
}