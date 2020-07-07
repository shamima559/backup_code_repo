#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);

    int test;
    scanf("%d", &test);
    getchar();

    while (test--)
    {
        char ch[129];
        scanf("%s", ch);

        int a = 0, b = 0, i;
        bool flag = false;
        for (i = 0; ch[i] != '\0'; i++)
        {
            if (ch[i] == '(')
                a++;
            else if (ch[i] == ')')
                a--;
            else if (ch[i] == '[')
                b++;
            else if (ch[i] == ']')
                b--;

            if (a < 0 || b < 0)
                break;
        }
        if (a == 0 && b == 0)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}