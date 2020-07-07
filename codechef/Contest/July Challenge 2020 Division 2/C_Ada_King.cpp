#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    scanf("%d", &test);

    while (test--)
    {
        int k;
        scanf("%d", &k);

        for (int i = 1; i <= 8; i++)
        {
            for (int j = 1; j <= 8; j++)
            {
                if (i == 1 && j == 1)
                    printf("O");
                else if ((i - 1) * 8 + j > k)
                    printf("X");
                else
                    printf(".");
            }
            printf("\n");
        }
    }

    return 0;
}