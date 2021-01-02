#include <stdio.h>
#include <string.h>

int main()
{
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int i, j, k, a;
    float n, loop;
    char str[16][15], name[100][101];
    strcpy(str[0], "Happy");
    strcpy(str[1], "birthday");
    strcpy(str[2], "to");
    strcpy(str[3], "you");
    strcpy(str[11], "Rujia");
    strcpy(str[4], str[0]);
    strcpy(str[5], str[1]);
    strcpy(str[6], str[2]);
    strcpy(str[7], str[3]);
    strcpy(str[8], str[0]);
    strcpy(str[9], str[1]);
    strcpy(str[10], str[2]);
    strcpy(str[12], str[0]);
    strcpy(str[13], str[1]);
    strcpy(str[14], str[2]);
    strcpy(str[15], str[3]);

    scanf("%f", &n);
    a = n;
    loop = n / 16;
    if (loop > (int)loop)
    {
        loop = (int)loop;
        loop++;
    }
    loop *= 16;

    for (i = 0; i < n; i++)
        scanf("%99s", name[i]);

    for (i = 0, j = 0, k = 0; i < loop; i++)
    {
        printf("%s: %s\n", name[k++], str[j++]);
        if (j % 16 == 0 && a != 16) //&& a != 16 na dileo hobe
            j = 0;
        if (k % a == 0 && a != 16) //&& a != 16 na dileo hobe
            k = 0;
    }

    return 0;
}
