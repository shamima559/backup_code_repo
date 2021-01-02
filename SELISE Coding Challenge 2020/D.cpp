#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);

    char s[200], ref[] = "microsft";
    scanf("%s", s);

    bool flag;
    for (int i = 0; i < 8; i++)
    {
        flag = false;
        for (int j = 0; s[j] != '\0'; j++)
        {
            if (ref[i] == s[j])
            {
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            puts("Only I love Microsoft!");
            return 0;
        }
    }
    puts("We both love Microsoft!");

    return 0;
}