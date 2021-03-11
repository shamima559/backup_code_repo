#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);

    float att, ct, assng, viva, prev_cg, cg_mark, grade;

    printf("############Level 4 Term 2 Grade Calculator############\n");

    printf("\n\nEnter the number of your attendance: ");
    scanf("%f", &att);

    printf("Enter the number of your classtest: ");
    scanf("%f", &ct);

    printf("Enter the CGPA of your previous 7 terms: ");
    scanf("%f", &prev_cg);
    if (prev_cg < 2.5 && prev_cg >= 2.0) cg_mark = 5 * 3;
    else if (prev_cg < 2.75 && prev_cg >= 2.5) cg_mark = 6 * 3;
    else if (prev_cg < 3.0 && prev_cg >= 2.75) cg_mark = 7 * 3;
    else if (prev_cg < 3.25 && prev_cg >= 3.0) cg_mark = 8 * 3;
    else if (prev_cg < 3.5 && prev_cg >= 3.25) cg_mark = 9 * 3;
    else if (prev_cg < 3.75 && prev_cg >= 3.5) cg_mark = 9.5 * 3;
    else if (prev_cg <= 4.0 && prev_cg >= 3.75) cg_mark = 10 * 3;

    printf("Enter your expected %% on viva (out of 30%%): ");
    scanf("%f", &viva);

    printf("Enter your expected %% on assignment (out of 10%%): ");
    scanf("%f", &assng);

    grade = ((4 * (ct + att)) / 3.0) + assng * 3 + viva * 3 + cg_mark * 2;

    /*if (80-100)
    100-80 A+ 4
    75 <80 A 3.75
    70 <75 A- 3.5
    65 <70 B= 3.25
    60 <65 B 3
    55 <60 B- 2.75
    50 <55 C+ 2.5
    45 <50 C 2.25
    40 <45 D 2.0
    <40 F 0
    */

    printf("\n%.2f%%\n", grade / 3.0);

    return 0;
}