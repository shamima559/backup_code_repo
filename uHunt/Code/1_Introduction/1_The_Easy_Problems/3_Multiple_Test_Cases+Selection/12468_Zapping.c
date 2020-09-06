#include <stdio.h>

int main()
{
    int Inpos, togopos, frwrd, bckwrd;

    while (scanf("%d %d", &Inpos, &togopos) && Inpos != -1 && togopos != -1)
    {
        frwrd = togopos - Inpos;
        if (frwrd < 0 && frwrd < -50)
            frwrd = 100 + frwrd;
        else if (frwrd < 0)
            frwrd = -frwrd;
        bckwrd = Inpos + 100 - togopos;

        if (frwrd < bckwrd)
            printf("%d\n", frwrd);
        else
            printf("%d\n", bckwrd);
    }
    return 0;
}