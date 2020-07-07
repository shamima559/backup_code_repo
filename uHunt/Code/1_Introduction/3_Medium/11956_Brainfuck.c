#include <stdio.h>

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int test, pointer = 0, i = 1, j;
    char ch;

    scanf("%d", &test);
    getchar();

    while (test--)
    {
        int display_memory[100] = {0};
        pointer = 0;
        
        while ((ch = getchar()))
        {
            if (ch == '\n')
                break;

            if (ch == '>')
            {
                pointer++;
                if (pointer == 100)
                    pointer = 0;
            }

            else if (ch == '<')
            {
                pointer--;
                if (pointer == -1)
                    pointer = 99;
            }

            else if (ch == '+')
                display_memory[pointer]++;

            else if (ch == '-')
                display_memory[pointer]--;
        }

        printf("Case %d:", i++);
        for (j = 0; j < 100; j++)
        {
            if (display_memory[j] == 0)
                printf(" 00");
            else if (display_memory[j] < 0)
                printf(" %X", 256 + display_memory[j]);
            else if (display_memory[j] < 16)
                printf(" 0%X", display_memory[j]);
            else
                printf(" %X", display_memory[j]);
            
        }
        printf("\n");
    }

    return 0;
}