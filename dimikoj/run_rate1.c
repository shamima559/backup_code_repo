#include <stdio.h>

int main()
{
    float run_rate, required_run_rate, target, current_run, ball;
    int test;

    scanf("%d", &test);

    while (test--)
    {
        scanf("%f%f%f", &target, &current_run, &ball);
        run_rate = (current_run / (300 - ball)) * 6;
        if (target + 1 > current_run)
            required_run_rate = ((target + 1 - current_run) / ball) * 6;
        else
            required_run_rate = 0;
        printf("%.2f %.2f\n", run_rate, required_run_rate);
    }
}