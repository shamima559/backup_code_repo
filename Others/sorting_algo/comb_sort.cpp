#include <bits/stdc++.h>

using namespace std;

int getNextGap(int gap);
void combSort(int a[], int n);

int a[10];
int main()
{
    //freopen("input.txt","r",stdin);

    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the element of the array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    combSort(a, n);

    printf("The sorted array is:");
    for (int i = 0; i < n; i++)
        printf(" %d", a[i]);

    return 0;
}

// To find gap between elements
int getNextGap(int gap)
{
    // Shrink gap by Shrink factor
    gap = (gap * 10) / 13;

    if (gap < 1)
        return 1;
    return gap;
}

// Function to sort a[0..n-1] using Comb Sort
void combSort(int a[], int n)
{
    // Initialize gap
    int gap = n;

    // Initialize swapped as true to make sure that
    // loop runs
    bool swapped = true;

    // Keep running while gap is more than 1 and last
    // iteration caused a swap
    while (gap != 1 || swapped == true)
    {
        // Find next gap
        gap = getNextGap(gap);

        // Initialize swapped as false so that we can
        // check if swap happened or not
        swapped = false;

        // Compare all elements with current gap
        for (int i = 0; i < n - gap; i++)
        {
            if (a[i] > a[i + gap])
            {
                swap(a[i], a[i + gap]);
                swapped = true;
            }
        }
    }
}