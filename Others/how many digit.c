#include <stdio.h>

int main()
{
    int test, n, i, j, r[101], add = 0, mul = 1, z, k, l, s;

    //test case
    scanf("%d", &test);

    for (j = 0; j < test; j++)
    {
        //asking for a number
        scanf("%d", &n);

        printf("digits are ");

        for (i = 0; n != 0; i++)
        {
            r[i] = n % 10;    //putting the digits of the number in an array
            n = n / 10;       //eliminating the last digit of the number
            add = add + r[i]; //add
            mul = mul * r[i]; //mul
        }

        //printing the seperated digits of the number
        for (z = i - 1; z >= 0; z--)
        {
            printf("%d ", r[z]);
        }
        printf("\n");
        printf("total %d digit(s)\n", i);
        printf("add %d\n", add); //printing the addition of the digits
        printf("mul %d\n", mul); //printing the multiplication of the digits
        add = 0;                 //reassigning 0 for the next iteration
        mul = 1;                 //reassigning 1 for the next iteration

        //creating an array for counting the repeated digit
        int a[10] = {0};

        for (l = 0; l < i; l++)
        {
            a[r[l]]++; //incrementing the value of array a[]
        }              //at r[l] (r[l] is the array of digits) index

        //printing the repeated value of the digits
        for (k = 0; k < 10; k++)
        {
            if (a[k] != 0)
                s = printf("The digit '%d' appears %d time(s) in the given number\n", k, a[k]);
        }
        for (i = 0; i < s; i++)
        {
            printf("_");
        }
        printf("\n");
    }
}
