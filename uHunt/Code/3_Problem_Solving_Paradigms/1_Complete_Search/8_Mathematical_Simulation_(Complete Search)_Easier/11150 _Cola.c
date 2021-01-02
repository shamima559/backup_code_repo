#include <stdio.h>

int main()
{
    int cola;

    while (scanf("%d", &cola) != EOF)
    {
        cola += (cola / 2);
        printf("%d\n", cola);
    }

    return 0;
}