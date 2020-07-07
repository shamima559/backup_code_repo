#include <stdio.h>
#include <math.h>

int main()
{
    int i, test, n;
    float root;
    scanf("%d", &test);

    while (test--)
    {
        scanf("%d", &n);
        root = sqrt(n);
        i = root;
        if (root == i)
            printf("YES\n");
        else
            printf("NO\n");
    }
}