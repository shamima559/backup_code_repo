#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);

    int m, n;
    printf("Enter the size of row and column of the matrix: ");
    scanf("%d %d", &m, &n);

    int a[100][100];
    printf("Enter the element of the matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }

    int x, y;
    printf("Enter the size of row and column of the matrix: ");
    while (scanf("%d %d", &x, &y) && x != n)
    {
        printf("The size of the column of 1st matrix must be equal to the size of the row of 2nd matrix\n");
        printf("Enter the size of row and column of the matrix: ");
    }

    int b[100][100];
    printf("Enter the element of the matrix:\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
            scanf("%d", &b[i][j]);
    }

    int ans[100][100] = {0}, row = 0, k = 0, l = 0;
    for (int i = 0; i < m; i++)
    {
        for (int column = 0; column < y; column++)
        {
            for (int j = 0; j < n; j++)
                ans[k][l] += (a[i][j] * b[row++][column]);
            row = 0;
            l++;
        }
        k++;
        l = 0;
    }

    printf("The resultant matrix is \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < y; j++)
            printf("%d ", ans[i][j]);
        printf("\n");
    }

    return 0;
}