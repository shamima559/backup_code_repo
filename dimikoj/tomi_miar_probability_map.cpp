#include <bits/stdc++.h>

using namespace std;

int factorial(int n)
{
    int factorial, i;

    factorial = 1;
    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int test;
    scanf("%d", &test);
    getchar();

    while (test--)
    {
        int c = 0, denominator = 1;
        char str[21], ch = 'a';
        map<string, int> word;
        map<string, int>::iterator it;

        while (ch != '\n')
        {
            scanf("%s", str);
            word[str]++;
            ch = getchar();
            c++;
            denominator *= c;
        }

        int numerator = 1;
        for (it = word.begin(); it != word.end(); it++)
            numerator *= factorial(it->second);

        int inv_probability = denominator / numerator;
        printf("1/%d\n", inv_probability);
    }

    return 0;
}