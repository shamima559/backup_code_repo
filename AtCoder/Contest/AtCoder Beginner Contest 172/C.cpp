#include <bits/stdc++.h>

using namespace std;

int a[200009], b[200009], A[200009], B[200009];
int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        i ? A[i] = A[i - 1] + a[i] : A[i] = a[i];
    }

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
        i ? B[i] = B[i - 1] + b[i] : B[i] = b[i];
    }

    if (A[n - 1] <= k)
    {
        printf("%d", n);
        return 0;
    }
    int i, j;
    for (i = 0; i < n; i++)
    {
        if (A[i] > k)
            break;
    }
    for (j = 0; j < m; j++)
    {
        if (B[j] > k)
            break;
    }

    printf("%d", max(i, j));

    return 0;
}