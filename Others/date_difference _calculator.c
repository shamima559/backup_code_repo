/*date difference calculator*/

#include <stdio.h>

int main()
{
    int Date1 = 0, Date2 = 0, Dif, F, L, D1, D2, M1, M2, Y1, Y2;
    int x[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int y[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char A1, A2, B1, B2;

    /*input first date*/

    fprintf(stderr, "Enter first date,in the form <day>/<month>/<year>  or <day>-<month>-<year>.\nWhere <day>,<month> and <year> are integers:\n");
    (scanf("%i%c%i%c%i", &D1, &A1, &M1, &B1, &Y1));

    /*check first date*/

    if (!(Y1 % 4))
        x[2] = 29;
    while ((Y1 < 1 || (Y1 > 9999)) || (M1 < 1 || M1 > 12) || (D1 < 1 || D1 > x[M1]) || (A1 != B1) || ((A1 != '/') && (A1 != '-')))
    {
        fprintf(stderr, "Incorrect format, re-enter date:\n");
        scanf("%i%c%i%c%i", &D1, &A1, &M1, &B1, &Y1);
        if (!(Y1 % 4))
            x[2] = 29;
    }

    /*print first date*/

    fprintf(stderr, "First date = %i%c%i%c%i\n", D1, A1, M1, B1, Y1);

    /*input second date*/

    fprintf(stderr, "Enter second date,in the form <day>/<month>/<year> or <day>-<month>-<year>.\nWhere <day>,<month> and <year> are integers:\n");
    (scanf("%i%c%i%c%i", &D2, &A2, &M2, &B2, &Y2));

    /*check second date*/

    if (!(Y2 % 4))
        y[2] = 29;
    while ((Y2 < 1 || (Y2 > 9999)) || (M2 < 1 || M2 > 12) || (D2 < 1 || D2 > y[M2]) || (A2 != B2) || ((A2 != '/') && (A2 != '-')))
    {
        fprintf(stderr, "Incorrect format, re-enter date:\n");
        scanf("%i%c%i%c%i", &D2, &A2, &M2, &B2, &Y2);
        if (!(Y2 % 4))
            y[2] = 29;
    }

    /*print second date*/

    fprintf(stderr, "Second date = %i%c%i%c%i\n", D2, A2, M2, B2, Y2);

    /*convert first date into days*/

    for (F = 1; Y1 > F; F++)
    {
        if (F % 4 == 0)
            (Date1 = Date1 + 366);
        else
            (Date1 = Date1 + 365);
    }
    for (L = 1; M1 > L; L++)
        Date1 = Date1 + x[L];
    Date1 = Date1 + D1;

    /*convert second date into days*/

    for (F = 1; Y2 > F; F++)
    {
        if (F % 4 == 0)
            (Date2 = Date2 + 366);
        else
            (Date2 = Date2 + 365);
    }
    for (L = 1; M2 > L; L++)
        Date2 = Date2 + y[L];
    Date2 = Date2 + D2;

    /*standard output*/

    Dif = Date2 - Date1;
    printf("\n%i\n\n", Dif);

    /*text output*/

    if (Date2 > Date1)
    {
        Dif = Date2 - Date1;
        fprintf(stderr, "Indicating that the first date is %i days before second date.\n", Dif);
    }
    if (Date1 > Date2)
    {
        Dif = Date1 - Date2;
        fprintf(stderr, "Indicating that the second date is %i days before first date.\n", Dif);
    }
    if (Date1 == Date2)
        fprintf(stderr, "Indicating that the first date is equal to second date.\n");
}