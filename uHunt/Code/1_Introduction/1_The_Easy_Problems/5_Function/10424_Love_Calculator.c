#include <stdio.h>
#include <string.h>

char name1[26], name2[26];

int digit_sum(int n);
void lowercase(char *name1, char *name2);
char *fgets_wrapper(char *buffer, size_t buflen, FILE *fp);

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int nm1[30] = {0}, nm2[30] = {0};
    int i;
    float sum1 = 0, sum2 = 0;

    while (fgets_wrapper(name1, sizeof(name1), stdin) && fgets_wrapper(name2, sizeof(name2), stdin))
    {
        lowercase(name1, name2);

        for (i = 0; name1[i] != '\0'; i++)
        {
            if (name1[i] >= 'a' && name1[i] <= 'z')
            {
                nm1[i] = name1[i] - 96;
                sum1 += nm1[i];
            }
        }
        for (i = 0; sum1 != digit_sum(sum1); i++)
            sum1 = digit_sum(sum1);

        for (i = 0; name2[i] != '\0'; i++)
        {
            if (name2[i] >= 'a' && name2[i] <= 'z')
            {
                nm2[i] = name2[i] - 96;
                sum2 += nm2[i];
            }
        }
        for (i = 0; sum2 != digit_sum(sum2); i++)
            sum2 = digit_sum(sum2);

        if (sum1 <= sum2)
            printf("%.2f %%\n", (sum1 / sum2) * 100);
        else
            printf("%.2f %%\n", (sum2 / sum1) * 100);

        sum1 = sum2 = 0;
    }

    return 0;
}

int digit_sum(int n)
{
    int i, sum = 0, dgt[15];
    for (i = 0; n != 0; i++) //or while(n) karon div korte korte jokhn n < 10 hobe tokhn n /= 10 = 0 hobe..and while(0) will terminate the loop...
    {
        dgt[i] = n % 10;
        sum += dgt[i];
        n /= 10;
    }
    return sum;
}

void lowercase(char *name1, char *name2)
{
    int i;

    for (i = 0; name1[i] != '\0'; i++)
    {
        if (name1[i] >= 'A' && name1[i] <= 'Z')
            name1[i] += ('a' - 'A');
    }
    for (i = 0; name2[i] != '\0'; i++)
    {
        if (name2[i] >= 'A' && name2[i] <= 'Z')
            name2[i] += ('a' - 'A');
    }
}

char *fgets_wrapper(char *buffer, size_t buflen, FILE *fp)
{
    if (fgets(buffer, buflen, fp) != 0)
    {
        buffer[strcspn(buffer, "\n")] = '\0'; //strcspn search the string(buffer) for another string("\n") and returns the index where is found..
        return buffer;
    }
    return 0;
}

/*char *fgets_wrapper(char *buffer, size_t buflen, FILE *fp)
{
    if (fgets(buffer, buflen, fp) != 0)
    {
        size_t len = strlen(buffer);
        if (len > 0 && buffer[len - 1] == '\n')
            buffer[len - 1] = '\0';
        return buffer;
    }
    return 0;
}*/
