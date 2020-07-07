#include <stdio.h>
int main()
{
    int initial, first, second, third, angle;

    while (scanf("%d%d%d%d", &initial, &first, &second, &third))
    {
        if (initial == 0 && first == 0 && second == 0 && third == 0)
            return 0; //or break; and return 0; will be moved to the last line

        angle = 2 * 360;

        if (initial > first)
            angle += (initial - first) * 9;
        else
            angle += (initial + 40 - first) * 9;

        angle += 360;

        if (first > second)
            angle += (second + 40 - first) * 9;
        else
            angle += (second - first) * 9;

        if (second > third)
            angle += (second - third) * 9;
        else
            angle += (second + 40 - third) * 9;

        printf("%d\n", angle);
    }
}