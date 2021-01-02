#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long int n;
    scanf("%llu", &n);

    int name[15], i;
    for (i = 0; n; i++)
    {
        n--;
        name[i] = n % 26;
        n /= 26;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%c", name[j] + 'a');

    return 0;
}