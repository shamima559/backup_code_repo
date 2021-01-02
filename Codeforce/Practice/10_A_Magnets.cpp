#include <bits/stdc++.h>

using namespace std;

char mag[1000010][5];
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%s", mag[i]);

    int c = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (strcmp(mag[i], mag[i + 1]))
            c++;
    }
    c++;
    printf("%d", c);

    return 0;
}