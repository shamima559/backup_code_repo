#include <stdio.h>
#include <string.h>

int main()
{
    int test, donate = 0, sum = 0;
    char ch[10];
    scanf("%d", &test);

    while (test--)
    {
        scanf("%s", ch);
        if (strcmp(ch, "report") == 0)
            printf("%d\n", sum);
        else
        {
            scanf("%d", &donate);
            sum += donate;
        }
    }

    return 0;
}