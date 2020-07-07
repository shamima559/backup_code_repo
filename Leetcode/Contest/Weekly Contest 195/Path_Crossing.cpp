#include <bits/stdc++.h>

using namespace std;
    
bool isPathCrossing(string path)
{
    char str[] = "NESWNESENWSEN";
    int cnt[100000], j = 0, l = 0;
    char store[100000];
    for (int i = 0; i < (int)path.size(); i++)
    {
        if (!i)
            store[j++] = path[i];
        if (i != 0 && path[i] != path[i - 1])
        {
            store[j++] = path[i];
            cnt[++l] = 1;
        }
        else
            cnt[l]++;
    }
    /*for (int i = 0; i < j; i++)
        printf("%c ", store[i]);
    cout << "\n";

    for (int i = 0; i <= l; i++)
        printf("%d ", cnt[i]);
    cout << "\n";*/

    for (int i = 0; i < j; i++)
    {
        
    }
    
}

int main()
{
    string s;
    cin >> s;
    if (isPathCrossing(s))
        printf("True");
    else
        printf("False");

    return 0;
}