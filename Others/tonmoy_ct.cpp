#include<stdio.h>
#include<math.h>


int main()
{

    float a, area, perimetre, semiperimetre;

    printf("Enter the length of the side\n");
    scanf("%f", &a);

    perimetre = 3.0 * a;

    semiperimetre = perimetre / 2.0;

    area = (sqrt(3.0) / 4.0) * a * a;

    printf("Perimetre = %.3f\nSemi-perimetre = %.3f\nArea = %.3f\n",perimetre, semiperimetre, area );


    return 0;
}