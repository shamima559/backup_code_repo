#include <bits/stdc++.h>

using namespace std;

char str[200];
int main()
{
    // freopen("input.txt","r",stdin);

    int test;
    scanf("%d", &test);

    while (test--)
    {
        scanf("%s", str);

        char start = str[0], end  = str[strlen(str) - 1];
        bool flag = true;
        int op = 0, cl = 0, oth = 0;

        for (int i = 0; i < strlen(str); i++)
        {
            if (str[i] == start) op++;
            else if (str[i] == end) cl++;
            else oth++;
        }

        if (start == end || (op == cl && oth != 0))
        {
            printf("NO\n");
            continue;
        }

        // if (op > cl && op == cl + oth) flag = true;
        // else if (op < cl && cl == op + oth) flag = true;
        // else if (op == cl && oth == 0) flag = true;


        int cnt = 0;
        for (int i = 0; i < strlen(str); i++)
        {
            if (str[i] == start) cnt++;
            else if (str[i] == end) cnt--;
            else if (op > cl) cnt--;
            else if (op < cl) cnt++;
            if (cnt < 0)
            {
                flag = false;
                break;
            }
        }
        
        if (flag && cnt == 0) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}