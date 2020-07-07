#include <stdio.h>

int max(int arr[], int size)
{
    int mx = arr[0], i;
    for (i = 0; i < size; i++)
    {
        if (mx < arr[i])
            mx = arr[i];
    }
    return mx;
}

int main()
{
    int row, i, j, count;
    char image[13][25];

    while (scanf("%d", &row) && row != 0)
    {
        getchar();
        count = 0;

        int arr[row], mx, ans = 0;

        for (i = 0; i < row; i++)
        {
            for (j = 0; j < 25; j++)
            {
                scanf("%c", &image[i][j]); //image[i][j]=getchar();     //same

                if (image[i][j] == 'X')
                    count++;
            }
            getchar();
            arr[i] = count;
            count = 0;
        }

        mx = max(arr, row);

        for (i = 0; i < row; i++)
            ans += (mx - arr[i]);

        printf("%d\n", ans);
    }

    return 0;
}