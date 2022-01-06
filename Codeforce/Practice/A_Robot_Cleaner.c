#include <stdio.h>

int min(int a, int b)
{
    if (a <= b)
        return a;
    else
        return b;
}


int main(){
    //freopen("input.txt", "r", stdin);
    int test;
    scanf("%d", &test);

    int n, m, r_b, c_b, r_d, c_d;
    while(test--){
        scanf("%d %d %d %d %d %d", &n, &m, &r_b, &c_b, &r_d, &c_d);
        //printf("n = %d m = %d r_b = %d c_b = %d r_d = %d c_d = %d\n", n, m, r_b, c_b, r_d, c_d);

        if(r_d < r_b && c_d < c_b){
            //printf("top_left\n");
            printf("%d\n", 2 * (m - c_b) + c_b - c_d);
        }
        else if (r_d >= r_b && c_d >= c_b){
            //printf("bottom_right\n");
            printf("%d\n", min(r_d - r_b, c_d - c_b));
        }
        else if (r_d < r_b && c_d > c_b){
            //printf("top_right\n");
            printf("%d\n", c_d - c_b);
        }
        else if (r_d > r_b && c_d < c_b){
            //printf("bottom_left\n");
            printf("%d\n", r_d - r_b);
        }
    }
    return 0;
}

