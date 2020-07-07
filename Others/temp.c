#include <stdio.h>
#include <limits.h>

int main()
{
    int var = 75, var2 = 56, num;
    num = sizeof(var) ? (var2 > 23 ? ((var == 75) ? 'A' : 0) : 0) : 0;
    printf("%d", num);
    //char a = 7;
    //a ^= 5;
    //printf("%d", printf("%d", a += 3));
    //int a = 2, sum, b = 4;
    //a = 1;
    //int c = &a;
    //sum = a + b;
    //printf("%d\n", sizeof(int));
    //printf("%d\n", sizeof(long double));
    //printf("%d\n", sizeof(long int));
    //printf("%d\n", sizeof(long long int));
    //printf("%d\n", sizeof(short));
    //printf("%d\n", sizeof(signed long));
    //printf("%u\n", sizeof(unsigned short));
    //printf("\n%d %d", a, INT_MIN);
    //printf("\n%d %d", CHAR_MAX, CHAR_MIN);
    //printf("%u", a + b);
    //printf("%c", -2);
    //printf("%c", 254);
    //printf("%o", sum);
    //printf("%d",c);
    //printf("%d", sum = a++);
    //printf("%d", sum = ++a);
    //printf("%d", a++ + b);
    //printf("%d",printf("HELLO"));

    return 0;
}