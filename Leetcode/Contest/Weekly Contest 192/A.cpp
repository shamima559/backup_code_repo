#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> nums;
    int n, t;
    scanf("%d", &n);

    for (int i = 0; i < 2 * n; i++)
    {
        scanf("%d", &t);
        nums.push_back(t);
    }

    vector<int> result;
    result.clear();

    bool flag = true;
    for (unsigned int i = 0, c = 0; c < nums.size(); c++)
    {
        if (flag)
        {
            result.push_back(nums[i]);
            flag = false;
            i += n;
        }
        else
        {
            result.push_back(nums[i]);
            flag = true;
            i -= n;
            i++;
        }
    }

    for (int i = 0; i < result.size(); i++)
    {
        printf("%d ", result[i]);
    }

    return 0;
}