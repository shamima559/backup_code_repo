#include <bits/stdc++.h>

using namespace std;

void TOH(int n, char a, char b, char c);

// int cnt = 0;
int main()
{
    //freopen("input.txt","r",stdin);

    int n;
    scanf("%d", &n);

    char a = 'a', b = 'b', c = 'c';
    printf("minimum %d moves required\n", (int)pow(2, n) - 1);
    TOH(n, a, b, c);
    // printf("%d", cnt);

    return 0;
}

void TOH(int n, char a, char b, char c)
{
    if (n <= 1)
    {
        // cnt++;
        printf("move disk %d from %c to %c\n", n, a, c);
        return;
    }
    TOH(n - 1, a, c, b);
    // cnt++;
    printf("move disk %d from %c to %c\n", n, a, c);
    TOH(n - 1, b, a, c);
}