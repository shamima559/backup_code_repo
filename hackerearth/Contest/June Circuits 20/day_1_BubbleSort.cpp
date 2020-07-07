#include <bits/stdc++.h>

using namespace std;

int swap_count(int *array, int size)
{
    int count = 0;
    bool swapped = true;
    while (swapped)
    {
        swapped = false;
        count++;
        for (int i = 0; i < size - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                swap(array[i], array[i + 1]);
                swapped = true;
            }
        }
    }
    return count;
}

int a[50000];
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("%d", swap_count(a, n));

    return 0;
}