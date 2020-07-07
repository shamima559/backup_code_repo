#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    getchar();

    char t, str[100];
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%c", &str[i]);
        if (i)
        {
            if (t == str[i])
                c++;
        }
        t = str[i];
    }
    printf("%d", c);

    return 0;
}