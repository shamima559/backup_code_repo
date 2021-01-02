#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        int i, j, A[30] = {}, B[30] = {}, ANS[30] = {}, x = a, y = b, ans = x & y;
        int an = ans;
        for (i = 0; a; i++)
        {
            A[i] = a % 2;
            a /= 2;
        }
        for (j = 0; b; j++)
        {
            B[j] = b % 2;
            b /= 2;
        }
        for (int l = 0; ans; l++)
        {
            ANS[l] = ans % 2;
            ans /= 2;
        }

        int lim = max(i, j);
        cout << x << " = ";
        for (int k = lim - 1; k >= 0; k--)
            cout << A[k] << " ";
        cout << "\n";
        cout << y << " = ";
        for (int k = lim - 1; k >= 0; k--)
            cout << B[k] << " ";
        cout << "\n";
        for (int k = 0; k < lim * 2 + 6; k++)
            cout << "-";
        cout << "\n";
        cout << an << " = ";
        for (int k = lim - 1; k >= 0; k--)
            cout << ANS[k] << " ";
        cout << "\n";
    }

    return 0;
}