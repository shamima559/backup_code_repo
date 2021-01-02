#include <bits/stdc++.h>

using namespace std;

int mat[6][6];
int main()
{
    int ans;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &mat[i][j]);
            if (mat[i][j])
            {
                ans = abs(i - 2) + abs(j - 2);
                break;
            }
        }
    }
    printf("%d", ans);

    return 0;
}