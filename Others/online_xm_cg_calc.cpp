#include<bits/stdc++.h>

using namespace std;

int main()
{
    // freopen("input.txt","r",stdin);

    float att, ct, assng, viva, prev_cg, cg_mark, grade;

    printf("\n\n############Level 4 Term 2 Grade Calculator############\n\n");

    printf("\nEnter the number of your attendance: ");
    scanf("%f", &att);

    printf("\nEnter the number of your classtest: ");
    scanf("%f", &ct);

    printf("\nEnter the CGPA of your previous 7 terms: ");
    scanf("%f", &prev_cg);
    if (prev_cg < 2.5 && prev_cg >= 2.0) cg_mark = 5 * 3;
    else if (prev_cg < 2.75 && prev_cg >= 2.5) cg_mark = 6 * 3;
    else if (prev_cg < 3.0 && prev_cg >= 2.75) cg_mark = 7 * 3;
    else if (prev_cg < 3.25 && prev_cg >= 3.0) cg_mark = 8 * 3;
    else if (prev_cg < 3.5 && prev_cg >= 3.25) cg_mark = 9 * 3;
    else if (prev_cg < 3.75 && prev_cg >= 3.5) cg_mark = 9.5 * 3;
    else if (prev_cg <= 4.0 && prev_cg >= 3.75) cg_mark = 10 * 3;

    printf("\nEnter your expected %% on viva (out of 30%%): ");
    scanf("%f", &viva);

    printf("\nEnter your expected %% on assignment (out of 10%%): ");
    scanf("%f", &assng);

    grade = ((4 * (ct + att)) / 3.0) + assng * 3 + viva * 3 + cg_mark * 2;
    grade /= 3.0;

    /*
    100 <=80 A+ 4
    75 <80 A 3.75
    70 <75 A- 3.5
    65 <70 B+ 3.25
    60 <65 B 3
    55 <60 B- 2.75
    50 <55 C+ 2.5
    45 <50 C 2.25
    40 <45 D 2.0
    <40 F 0
    */

   if (grade <= 100 && grade >=80) printf("\nResult: %.2f  Grade: A+  GPA: 4.00\n", grade);
   else if (grade < 80 && grade >= 75) printf("\nResult: %.2f  Grade: A  GPA: 3.75\n", grade);
   else if (grade < 75 && grade >= 70) printf("\nResult: %.2f  Grade: A-  GPA: 3.50\n", grade);
   else if (grade < 70 && grade >= 65) printf("\nResult: %.2f  Grade: B+  GPA: 3.25\n", grade);
   else if (grade < 65 && grade >= 60) printf("\nResult: %.2f  Grade: B  GPA: 3.00\n", grade);
   else if (grade < 60 && grade >= 55) printf("\nResult: %.2f  Grade: B-  GPA: 2.75\n", grade);
   else if (grade < 55 && grade >= 50) printf("\nResult: %.2f  Grade: C+  GPA: 2.50\n", grade);
   else if (grade < 50 && grade >= 45) printf("\nResult: %.2f  Grade: C  GPA: 2.25\n", grade);
   else if (grade < 45 && grade >= 40) printf("\nResult: %.2f  Grade: D  GPA: 2.00\n", grade);
   else if (grade < 40) printf("\nResult: %.2f  Grade: F  GPA: 0.00\n",  grade);

   printf("\n\n#######################################################\n\n");


    // printf("\n%.2f%%\n", grade / 3.0);

    return 0;
}