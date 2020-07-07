#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int sum = 0;
    if (a % 2 == 0)
    {
        printf("%d is even\n", a);
        sum += a;
    }
    else
    {
        printf("%d is odd\n", a);
        sum -= a;
    }
    if (b > 0)
    {
        printf("%d is greater than zero\n", b);
        sum += b;
    }
    else if (b < 0)
    {
        printf("%d is less than zero\n", b);
        sum -= b;
    }
    else
    {
        printf("%d is equal to zero\n", b);
        sum *= b;
    }
    int x = a + b;
    printf("after adding,a+b is equal to %d\n", x);
    if (x % 2 == 0)
    {
        sum += (a + b);
        printf("after adding %d %d sum is equal to %d\n", a, b, sum);
    }
    else if (x % 2 == 1)
    {
        sum -= (a + b);
        printf("after removing %d %d sum is equal to %d\n", a, b, sum);
    }
    else
    {
        sum *= 10;
        printf("the result after multiplying sum = %d\n", sum);
    }

    sum *= 5;

    printf("THE ULTIMATE RESULT = %d\n", sum);
    printf("I wanna be anational contestant and I can write long code\n");

    return 0;
}