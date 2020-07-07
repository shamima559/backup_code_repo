#include <bits/stdc++.h>

using namespace std;

int main()
{
    char word[21];

    scanf("%s", word);

    int z = 0, o = 0;
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == 'z')
            z++;
        else
            o++;
    }

    if (o == z * 2)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
