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
        else if (line[i] == '{')
            arr[pointer++] = 2;
        else if (line[i] == '}' && arr[pointer - 1] == 2 && i)
            arr[--pointer] = 0;
        else if (line[i] == '[')
            arr[pointer++] = 3;
        else if (line[i] == ']' && arr[pointer - 1] == 3 && i)
            arr[--pointer] = 0;
        else if (line[i] != '(' && line[i] != ')' && line[i] != '{' && line[i] != '}' && line[i] != '[' && line[i] != ']')
            continue;
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
        fgets(ch, sizeof(ch), stdin);
        ch[strlen(ch) - 1] = '\0';

        if (checkBalance(ch))
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}