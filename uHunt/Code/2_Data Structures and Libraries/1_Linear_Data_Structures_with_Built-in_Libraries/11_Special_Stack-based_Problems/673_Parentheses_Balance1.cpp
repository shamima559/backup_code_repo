#include <bits/stdc++.h>

using namespace std;

bool checkBalance(char *line)
{
    int arr[130], pointer = 0;

    for (int i = 0; line[i] != '\0'; i++)
    {
        if (line[i] == '(')
            arr[pointer++] = 1;
        else if (line[i] == ')' && arr[pointer - 1] == 1 && i)
            arr[--pointer] = 0;
        else if (line[i] == '[')
            arr[pointer++] = 2;
        else if (line[i] == ']' && arr[pointer - 1] == 2 && i)
            arr[--pointer] = 0;
        else
            return false;
    }
    if (!pointer)
        return true;
    else
        return false;
}

int main()
{
    int test;
    scanf("%d", &test);
    getchar();

    while (test--)
    {
        char ch[130];
        scanf("%s", ch);

        if (checkBalance(ch))
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}