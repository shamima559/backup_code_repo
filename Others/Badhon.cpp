#include <bits/stdc++.h>

using namespace std;

string lowercase(string word)
{
    for (unsigned int i = 0; i < word.size(); i++)
    {
        if (word[i] >= 'A' && word[i] <= 'Z')
            word[i] += (-'A' + 'a');
    }
    return word;
}

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int list_size;
    puts("Enter the size of the list : ");
    scanf("%d", &list_size);

    vector<string> word, check;
    string str, temp;
    for (int i = 0; i < list_size; i++)
    {
        //cout << "i = " << i << "\n";
        puts("Enter your entry : ");
        cin >> str;
        //cout << "word entered =" << str << "\n";
        temp = lowercase(str);
        //cout << "ater lowercase operation = " << temp << "\n";
        word.push_back(str);
        check.push_back(temp);
        //cout << "after push_back new word, vector size = " << word.size() << "\n";

        bool flag = false;
        for (int j = 0; j < (int)word.size() - 1; j++)
        {
            //cout << "check[" << j << "] = " << check[j] << "\n";
            if (temp == check[j])
            {
                cout << str << " is already in the list\n";
                check.pop_back();
                word.pop_back();
                //cout << "after pop_back, vector size = " << word.size() << "\n";
                flag = true;
                break;
            }
        }

        if (!flag)
        {
            for (int j = 0; j < (int)word.size(); j++)
                cout << "'" << word[j] << "'"
                     << " ";
            cout << "\n";
        }
    }

    return 0;
}