#include <stdio.h>

int bubble_sort(int ch[], int n);
int binary_search(int ch[], int n, int x);


int main()
{
    int n, test, j;
    puts("Enter the no. of test:");
    scanf("%d", &test);
    for (j = 0; j < test; j++)
    {
        //bubble sort
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
        printf("\n");

        //binary search
        int x, index;
        puts("Enter a element for binary search:");
        scanf("%d", &x);

        index = binary_search(a, n, x);

        if (index != -1)
            printf("The element is in the %dth index of the array\n", index);
        else
            puts("The element is not in the given array\n");

        printf("_____________________________\n");
    }
}

int bubble_sort(int ch[], int n)
{
    int i, j, flag, s;
    for (j = 0; j < n; j++)
    {
        flag = 0;
        for (i = 0; i < n - 1 - j; i++)
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

//with jump instruction
/*int binary_search(int ch[], int n, int x)
{
    int lower_index = 0, higher_index = n - 1, mid;

jump:
    mid = (lower_index + higher_index) / 2;
    if (lower_index > higher_index)
        return -1;
    if (ch[mid] == x)
        return mid;
    else if (ch[mid] > x)
    {
        higher_index = mid - 1;
        goto jump;
    }
    else
    {
        lower_index = mid + 1;
        goto jump;
    }
}*/

//with while loop
int binary_search(int ch[], int n, int x)
{
    int lower_index = 0, higher_index = n - 1, mid;

    while (lower_index <= higher_index)
    {
        mid = (lower_index + higher_index) / 2;
        if (ch[mid] == x)
            return mid;
        else if (ch[mid] > x)
            higher_index = mid - 1;

        else
            lower_index = mid + 1;
    }
    if (lower_index > higher_index)
        return -1;
}