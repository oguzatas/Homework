#include <stdio.h>
#include <stdlib.h>

void main()
{

    int students[10][4], sum = 0, min = 99999999, max = -99999999, val = 0;

    printf("Please enter the grades of the students.\nYou should type 1. students  Literature, Maths, Physics and Chemistry grades,\n afterly 2. students...   due to respect to the order\n");

    for (int i = 0; i < 10; i++) // part1 taking the inputs
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &students[i][j]);
        }
    }

    for (int i = 0; i < 10; i++) // part2 each students average grade
    {
        sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum = sum + students[i][j];
        }

        printf("%d. students average grade is %d\n\n", i + 1, sum / 4);
    }

    for (int j = 0; j < 4; j++) // part3 each lectures average grade
    {
        sum = 0;
        for (int i = 0; i < 10; i++)
        {
            sum = sum + students[i][j];
        }
        switch (j)
        {
        case '0':
        {
            printf("average grade for Literature is %f\n", (float)sum / 10);
        }
        case '1':
        {
            printf("average grade for Maths is %f\n", (float)sum / 10);
        }
        case '2':
        {
            printf("average grade for Physics is %f\n", (float)sum / 10);
        }
        case '3':
        {
            printf("average grade for Chemistry is %f\n", (float)sum / 10);
        }
        }
    }

    for (int i = 0; i < 10; i++) // part4 max-min grade for each student
    {
        min = 999, max = -999;
        for (int j = 0; j < 4; j++)
        {
            if (students[i][j] < min)
            {
                min = students[i][j];
            }
            if (students[i][j] > max)
            {
                max = students[i][j];
            }
        }

        printf("%d. students \n\t max grade =>%d\n\tmin grade =>%d\n\n ", i + 1, max, min);
    }
    for (int j = 0; j < 4; j++) // part5 each lectures max-min grade
    {
        max = -999, min = 999;

        for (int i = 0; i < 10; i++)
        {
            if (students[i][j] < min)
            {
                min = students[i][j];
            }
            if (students[i][j] > max)
            {
                max = students[i][j];
            }
        }
        switch (j)
        {
        case '0':
        {
            printf("for Literature\n\t max grade=> %d\n\tmin grade=> %d \n\n");
        }
        case '1':
        {
            printf("for Maths\n\t max grade=> %d\n\tmin grade=> %d \n\n");
        }
        case '2':
        {
            printf("for Physics\n\t max grade=> %d\n\tmin grade=> %d \n\n");
        }
        case '3':
        {
            printf("for Chemistry\n\t max grade=> %d\n\tmin grade=> %d \n\n");
        }
        }
    }
    max = -999;

    for (int i = 0; i < 10; i++) // part6 physics note of the student who is the most succesfull at maths
    {
        if (students[i][1] > max)
        {
            max = students[i][1];
            val = students[i][2];
        }
    }

    printf("physics note of the most succesfull student in the maths=> %d", val);
}