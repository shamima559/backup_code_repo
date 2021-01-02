#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	ll test;

	scanf("%lld", &test);

	while (test--)
	{
		ll a, b, c, d, x, y, x1, y1, x2, y2, u, v;
		scanf("%lld %lld %lld %lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &x, &y, &x1, &y1, &x2, &y2);

		if (x1 == x2 && a != 0 && b != 0)
		{
			printf("No\n");
			continue;
		}

		if (y1 == y2 && c != 0 && d != 0)
		{
			printf("No\n");
			continue;
		}

		if (a >= b)
			u = -1 * (a - b) + x;
		else
			u = 1 * (b - a) + x;
		if (c >= d)
			v = -1 * (c - d) + y;
		else
			v = 1 * (d - c) + y;

		if (u >= x1 && u <= x2 && v >= y1 && v <= y2)
			printf("Yes\n");
		else
			printf("No\n");
	}

	return 0;
}