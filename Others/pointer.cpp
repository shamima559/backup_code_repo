#include<bits/stdc++.h>

int main()
{
    int x, y, a[10];
    int *p;
    printf("Variable address before assignment\n");
    // printf("%d\n", &x);
    printf("Size of x = %d\n", sizeof(x));
    printf("Address of x = %p\n", &x);
    printf("Address of y = %p\n", &y);
    printf("Address of Array a\n");
    printf("Address of a = %p\n", &a);
    for (int i = 0; i < 10; i++)
    {
        printf("a[%d] = %p\n", i, &a[i]);
    }

    p = &x;
    printf("\nssssssssss %d\n", *p);
    x = 3, y = 1;
    printf("\nssssssssss %d\n", *p);
    *p = 123;
    for (int i = 0; i < 10; i++)
    {
        a[i] = i;
    }

    printf("X = %d\nY = %d\n", x, y);
    for (int i = 0; i < 10; i++)
    {
        printf("a[%d] = %d  ", i, a[i]);
    }
    printf("\n");

}