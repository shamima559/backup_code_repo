#include <bits/stdc++.h>

using namespace std;

int main()
{
    int number[3], c = 0;

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &number[i]);

        if (number[i] == number[i - 1] && i != 0)
            c++;
    }

    if (c != 2 && (number[0] == number[1] || number[0] == number[2]))
        printf("Yes\n");
    else if (c != 2 && number[1] == number[2])
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}