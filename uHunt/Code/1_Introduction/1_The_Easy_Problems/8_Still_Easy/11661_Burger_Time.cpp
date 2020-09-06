#include <bits/stdc++.h>

using namespace std;

char a[2000000];
int main()
{
    //freopen("input.txt","r",stdin);

    int test;
    scanf("%d", &test);

    while (test--)
    {
        scanf("%s", a);

        int mn = INT_MAX, d;
        bool R = false, D = false;
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
                else
                {
                    
                }
                R = true;
            }
            else if (a[i] == 'D')
            {
                if (D && !R)
                    d = 0;
                D = true;
            }
        }

        printf("%d\n", mn);
    }

    return 0;
}