#include <bits/stdc++.h>

using namespace std;

bool canBeEqual(int *target, int targetSize, int *arr, int arrSize)
{
    sort(target, target + targetSize);
    sort(arr, arr + arrSize);
    for (int i = 0; i < targetSize; i++)
    {
        if (target[i] != arr[i])
            return false;
    }
    return true;
}

int main()
{
    int target[3] = {3, 7, 11};
    int arr[3] = {3, 7, 11};
    int a = canBeEqual(target, 3, arr, 3);
    printf("%d", a);

    return 0;
}