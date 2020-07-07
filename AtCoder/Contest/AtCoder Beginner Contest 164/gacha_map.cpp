#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);

    int n;
    char str[11];
    map<string, int> item;
    //map<string, int>::iterator it;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", str);
        item[str]++;
    }

    /*for (it = item.begin(); it != item.end(); it++)
        cout << it->first << " " << it->second << endl;*/

    printf("%d\n", item.size());

    return 0;
}