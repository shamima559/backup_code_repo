#include <stdio.h>

int main()
{
    int people, budget, hotel, week, i, j, cost, temp;

    while (scanf("%d%d%d%d", &people, &budget, &hotel, &week) != EOF) //or == 4 or != -1
    {
        int price[hotel], bed[week];
        temp = 50000000;
        for (i = 0; i < hotel; i++)
        {
            scanf("%d", &price[i]);
            for (j = 0; j < week; j++)
            {
                scanf("%d", &bed[j]);
                if (bed[j] >= people)
                {
                    cost = price[i] * people;
                    if (cost <= budget && cost < temp)
                        temp = cost;
                }
            }
        }
        if (temp != 50000000)
            printf("%d\n", temp);
        else
            printf("stay home\n");
    }

    return 0;
}
