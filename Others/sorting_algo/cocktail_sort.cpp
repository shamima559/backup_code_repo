#include <iostream>

using namespace std;

void CocktailSort(int a[], int n);

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

    CocktailSort(a, n);

    printf("The sorted array is:");
    for (int i = 0; i < n; i++)
        printf(" %d", a[i]);

    return 0;
}

// Sorts arrar a[0..n-1] using Cocktail sort
void CocktailSort(int a[], int n)
{
    bool swapped = true;
    int start = 0;
    int end = n - 1;

    while (swapped)
    {
        // reset the swapped flag on entering
        // the loop, because it might be true from
        // a previous iteration.
        swapped = false;

        // loop from left to right same as
        // the bubble sort
        for (int i = start; i < end; ++i)
        {
            if (a[i] > a[i + 1])
            {
                swap(a[i], a[i + 1]);
                swapped = true;
            }
        }

        // if nothing moved, then array is sorted.
        if (!swapped)
            break;

        // otherwise, reset the swapped flag so that it
        // can be used in the next stage
        swapped = false;

        // move the end point back by one, because
        // item at the end is in its rightful spot
        --end;

        // from right to left, doing the
        // same comparison as in the previous stage
        for (int i = end - 1; i >= start; --i)
        {
            if (a[i] > a[i + 1])
            {
                swap(a[i], a[i + 1]);
                swapped = true;
            }
        }

        // increase the starting point, because
        // the last stage would have moved the next
        // smallest number to its rightful spot.
        ++start;
    }
}