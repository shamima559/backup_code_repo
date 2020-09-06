#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k = 0;
    while (scanf("%d", &n) != EOF)
    {
        if (k > 0)
            printf("\n");
        k++;

        map<string, int> name;
        map<string, int>::iterator it;

        string str, s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> str;
            s[i] = str;
            name[str] = 0;
        }

        int gift, prsn;
        for (int i = 0; i < n; i++)
        {
            cin >> str;
            scanf("%d %d", &gift, &prsn);
            bool flag = false;
            for (int i = 0; i < prsn; i++)
            {
                string temp;
                cin >> temp;
                name[temp] += floor((double)gift / prsn);
                flag = true;
            }
            if (flag)
                name[str] += (-prsn * floor((double)gift / prsn));
        }

        for (int i = 0; i < n; i++)
            cout << s[i] << " " << name[s[i]] << "\n";
    }

    return 0;
}