#include <stdio.h>
#include <string.h>

int min(int *array, int size)
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
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int i, count[4] = {0};
    char str[101];

    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'n')
            count[0]++;
        else if (str[i] == 'e')
            count[1]++;
        else if (str[i] == 'i')
            count[2]++;
        else if (str[i] == 't')
            count[3]++;
    }
    count[1] /= 3;
    if (count[0] > 3 && count[0] % 2 == 1)
        count[0] /= 2;
    else if (count[0] > 3 && count[0] % 2 == 0)
    {
        count[0] /= 2;
        count[0]--;
    }
    else if (count[0] == 3)
        count[0] = 1;
    else
        count[0] = 0;

    printf("%d\n", min(count, 4));

    return 0;
}