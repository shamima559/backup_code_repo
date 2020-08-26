#include <iostream>

using namespace std;

int partition(int array[], int l, int h);
void quick_sort(int array[], int l, int h);
int MedianOfThreePartition(int a[], int p, int r);
void QuickSortMedian(int a[], int start, int end);

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

    quick_sort(a, 0, n - 1);
    // QuickSortMedian(a, 0, n);

    printf("The sorted array is:");
    for (int i = 0; i < n; i++)
        printf(" %d", a[i]);

    return 0;
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void quick_sort(int array[], int l, int h)
{
    if (l >= h)
        return;

    int p = partition(array, l, h);

    // Lomuto partition scheme
    quick_sort(array, l, p - 1);
    quick_sort(array, p + 1, h);

    // Hoare partition scheme
    // quick_sort(array, l, p);
    // quick_sort(array, p + 1, h);
}

// selecting the last element as pivot
// Lomuto partition scheme
int partition(int array[], int l, int h)
{
    int pivot = array[h], i, j, temp;

    for (i = l - 1, j = l; j < h; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            temp = array[j];
            array[j] = array[i];
            array[i] = temp;
        }
    }

    i++;
    temp = array[h];
    array[h] = array[i];
    array[i] = temp;

    return i;
}

// selecting the first element as pivot
// Hoare partition scheme

// int partition(int array[], int l, int h)
// {
//     int pivot = array[l], i = l, j = h + 1;

//     while (i < j)
//     {
//         do
//         {
//             i++;
//         } while (array[i] <= pivot);
//         do
//         {
//             j--;
//         } while (array[j] > pivot);
//         if (i < j)
//         {
//             int temp = array[i];
//             array[i] = array[j];
//             array[j] = temp;
//         }
//     }
//     int temp = array[l];
//     array[l] = array[j];
//     array[j] = temp;

//     return j;
// }

// median of three partition

// void QuickSortMedian(int a[], int start, int end)
// {
//     int q;
//     if (end - start < 2)
//         return;
//     q = MedianOfThreePartition(a, start, end);
//     QuickSortMedian(a, start, q);
//     QuickSortMedian(a, q, end);
// }

// int MedianOfThreePartition(int a[], int p, int r)
// {
//     int x = a[p], y = a[(r - p) / 2 + p], z = a[r - 1], i = p - 1, j = r;
//     if ((y > x && y < z) || (y > z && y < x))
//         x = y;
//     else if ((z > x && z < y) || (z > y && z < x))
//         x = z;

//     while (1)
//     {
//         do
//         {
//             j--;
//         } while (a[j] > x);
//         do
//         {
//             i++;
//         } while (a[i] < x);
//         if (i < j)
//             swap(&a[i], &a[j]);
//         else
//             return j + 1;
//     }
// }