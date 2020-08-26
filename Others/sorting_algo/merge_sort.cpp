#include <iostream>

using namespace std;

void merge_sort(int array[], int left, int right);
void merge(int array[], int left, int mid, int right);

int a[100000];
int main()
{
    //freopen("input.txt","r",stdin);

    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the element of the array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    merge_sort(a, 0, n - 1);

    printf("The sorted array is:");
    for (int i = 0; i < n; i++)
        printf(" %d", a[i]);

    return 0;
}

void merge_sort(int array[], int left, int right)
{
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;
    merge_sort(array, left, mid);
    merge_sort(array, mid + 1, right);

    // there is a built-in merge function in c++ defined in "algorithm" header
    merge(array, left, mid, right);
}

void merge(int array[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];
    for (int i = 0; i < n1; i++)
        L[i] = array[left + i];
    for (int i = 0; i < n2; i++)
        R[i] = array[mid + i + 1];

    int lArr_index = 0, rArr_index = 0, sArr_index = left;
    while (lArr_index < n1 && rArr_index < n2)
    {
        if (L[lArr_index] <= R[rArr_index])
            array[sArr_index++] = L[lArr_index++];
        else
            array[sArr_index++] = R[rArr_index++];
    }

    while (lArr_index < n1)
        array[sArr_index++] = L[lArr_index++];
    while (rArr_index < n2)
        array[sArr_index++] = R[rArr_index++];
}