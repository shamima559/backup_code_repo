#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    char list[5][10] = {"Maruf", "Pappu", "Ehsan", "Rahud"};


    char str[10];
    scanf("%s", str);

    bool flag = false;
    for (int i = 0; i < 5; i++)
    {
        int ind = 0;
        for (int j = 0; list[i][j] != '\0' ; j++)
        {
            if(str[ind] == list[i][j] && str[ind] != '\0')
            {
                ind++;
                flag = true;
            }
        }
        if (str[ind] == '\0' && flag)
            printf("%s\n", list[i]);
    }
    



    return 0;
}