#include <bits/stdc++.h>

using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);

	int test;
	scanf("%d", &test);

	while (test--)
	{
		char ch[129];
		scanf("%s", ch);

		//for ()
		int a = 0, i, j;
		bool flag = true, ans1, ans2;
		for (i = 0; ch[i] != '\0'; i++)
		{
			if (ch[i] == '(')
				a++;
			else if (ch[i] == ')' && a == 0)
			{
				flag = false;
				break;
			}
			else if (ch[i] != '[' && ch[i] != ']' && a != 0)
			{
				for (j = i; a && ch[j] != '\0'; j++)
				{
					if (ch[j] == '(')
						a++;
					if (ch[j] == ')')
						a--;
				}
				i = j - 1;
			}
		}
		if (a == 0 && flag)
			ans1 = true;
		else
			ans1 = false;

		//for []
		for (i = 0; ch[i] != '\0'; i++)
		{
			if (ch[i] == '[')
				a++;
			else if (ch[i] == ']' && a == 0)
			{
				flag = false;
				break;
			}
			else if (ch[i] != '(' && ch[i] != ')' && a != 0)
			{
				for (j = i; a && ch[j] != '\0'; j++)
				{
					if (ch[j] == '[')
						a++;
					if (ch[j] == ']')
						a--;
				}
				i = j - 1;
			}
		}
		if (a == 0 && flag)
			ans2 = true;
		else
			ans2 = false;

		if (ans1 && ans2)
			printf("Yes\n");
		else
			printf("No\n");
	}

	return 0;
}