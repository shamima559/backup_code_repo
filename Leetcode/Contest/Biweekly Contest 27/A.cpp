#include <bits/stdc++.h>

using namespace std;

int target[3] = {3, 7, 9};
int arr[3] = {3, 7, 11};

bool canBeEqual(int targetSize, int arrSize)
{
    int j, temp[targetSize];
    bool flag = false;
    for (int i = 0; i < targetSize; i++)
    {
        while (arr[i] != target[i] && i < targetSize)
        {
            for (j = i + 1; j < arrSize; j++)
            {
                if (target[i] == arr[j])
                    break;
            }
            int t = j + 1;
            for (int k = i; k < t && t <= targetSize; k++)
            {
                temp[k] = arr[j--];
                flag = true;
            }

            for (int k = 0; k < t && flag; k++)
            {
                arr[k] = temp[k];
            }
            i++;
        }
    }
    for (int i = 0; i < targetSize; i++)
    {
        if (arr[i] != target[i])
            return false;
    }
    return true;
}

int main()
{
    int a = canBeEqual(3, 3);
    printf("%d", a);

    return 0;
}