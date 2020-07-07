#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);

    int n;
    scanf("%d", &n);

    map<string, int> word;
    map<string, int>::iterator it;
    word["AC"] = 0, word["WA"] = 0, word["TLE"] = 0, word["RE"] = 0;
    while (n--)
    {
        char str[10];
        scanf("%s", str);
        word[str]++;
    }
    printf("AC x %d\n", word["AC"]);
    printf("WA x %d\n", word["WA"]);
    printf("TLE x %d\n", word["TLE"]);
    printf("RE x %d\n", word["RE"]);

    return 0;
}