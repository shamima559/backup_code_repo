#include <stdio.h>
#include <string.h>

int main()
{
    char a[101][101];
    int i, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", a[i]);
        if ((int)a[i][strlen(a[i]) - 1] % 2 == 0)
            printf("even\n");
        else
            printf("odd\n");
    }
}
