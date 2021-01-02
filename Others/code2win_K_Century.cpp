#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    scanf("%d", &test);

    int i = 1;
    while (test--)
    {
        string y;
        cin >> y;
        if (y.size() <= 2)
            cout << "Case " << i++ << ": 1\n";
        else if (y[y.size() - 1] == '0' && y[y.size() - 2] == '0')
        {
            y.pop_back();
            y.pop_back();
            cout << "Case " << i++ << ": " << y << "\n";
        }
        else
        {
            y.pop_back();
            y.pop_back();
            int j;
            for (j = y.size() - 1; j >= 0; j--)
            {
                if (y[j] != '9')
                {
                    y[j] += 1;
                    break;
                }
                else
                    y[j] = '0';
            }
            if (j == -1)
                cout << "Case " << i++ << ": 1" << y << "\n";
            else
                cout << "Case " << i++ << ": " << y << "\n";
        }
    }

    return 0;
}