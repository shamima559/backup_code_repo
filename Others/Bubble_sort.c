#include <stdio.h>

int bubble_sort(int ch[], int n);

int main()
{
    int n, test, j;
    puts("Enter the no. of test:");
    scanf("%d", &test);
    for (j = 0; j < test; j++)
    {
        puts("Enter the size of the array:");
        scanf("%d", &n);
        int a[n], i;
        puts("Enter the element of the array");
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);

        a[n] = bubble_sort(a, n);

        puts("The sorted array is:");
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n_____________________________\n");
    }
}

int bubble_sort(int ch[], int size)
{
    int i, j, flag, s;
    for (j = 0; j < size; j++)
    {
        flag = 0;
        for (i = 0; i < size - 1 - j; i++)
        {
            if (ch[i] > ch[i + 1])
            {
                s = ch[i];
                ch[i] = ch[i + 1];
                ch[i + 1] = s;
                flag = 1;
            }
        }
        if (flag == 0)
            break;
    }
    return ch[i];
}
