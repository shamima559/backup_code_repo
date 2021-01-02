#include <stdio.h>

unsigned int digit1[1000000];
unsigned int digit2[101];

int min_array(int *array, int size)
{
	int i, mn;
	mn = array[0];

	for (i = 0; i < size; i++)
	{
		if (array[i] < mn)
			mn = array[i];
	}
	return mn;
}

int main()
{
    int arr[7] = {4, 3, 1, 1, 3, 3, 2};
    int arrSize = 7, lim,k=3;
    bool flag = false;
    if (arrSize > 1000000)
    {
        lim = arrSize - 1000000;
        flag = true;
    }
    for (unsigned int i = 0; i < 7; i++)
        digit1[arr[i]]++;

    if (flag)
    {
        for (unsigned int i = 0; i < 7; i++)
        {
            if (arr[i] >= 1000000)
                digit2[arr[i] - 1000000]++;
            else
                digit2[arr[i]]++;
        }
    }

    int mn = min_array(arr, 7),ans;
    if(mn<=k)
        ans = arrSize - 1;
    else{
        
    }

    return 0;
}