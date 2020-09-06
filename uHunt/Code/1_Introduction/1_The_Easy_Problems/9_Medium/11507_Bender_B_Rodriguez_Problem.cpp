#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);

    int L;

    while (scanf("%d", &L) && L)
    {
        string ch, c = "+x";
        while (L > 1)
        {
            L--;
            // scanf("%s", ch);
            cin >> ch;

            if (c == "+x")
            {
                if (ch == "+y")
                {
                    c = "+y";
                    continue;
                }
                if (ch == "-y")
                {
                    c = "-y";
                    continue;
                }
                if (ch == "+z")
                {
                    c = "+z";
                    continue;
                }
                if (ch == "-z")
                {
                    c = "-z";
                    continue;
                }
            }

            else if (c == "-x")
            {
                if (ch == "+y")
                {
                    c = "-y";
                    continue;
                }
                if (ch == "-y")
                {
                    c = "+y";
                    continue;
                }
                if (ch == "+z")
                {
                    c = "-z";
                    continue;
                }
                if (ch == "-z")
                {
                    c = "+z";
                    continue;
                }
            }

            else if (c == "+y")
            {
                if (ch == "+y")
                {
                    c = "-x";
                    continue;
                }
                if (ch == "-y")
                {
                    c = "+x";
                    continue;
                }
                // "+z"/ "-z" no change
            }

            else if (c == "-y")
            {
                if (ch == "+y")
                {
                    c = "+x";
                    continue;
                }
                if (ch == "-y")
                {
                    c = "-x";
                    continue;
                }
                // "+z"/ "-z" no change
            }

            else if (c == "+z")
            {
                // "+y"/ "-y" no change
                if (ch == "+z")
                {
                    c = "-x";
                    continue;
                }
                if (ch == "-z")
                {
                    c = "+x";
                    continue;
                }
            }

            else if (c == "-z")
            {
                // "+y"/ "-y" no change
                if (ch == "+z")
                {
                    c = "+x";
                    continue;
                }
                if (ch == "-z")
                {
                    c = "-x";
                    continue;
                }
            }
            // printf("%s\n", c);
        }
        cout << c << "\n";
    }

    return 0;
}