#include <stdio.h>

int main()
{
    int grades[10], i, max = 0, min = 0;
    float sum = 0;
    printf("please type 5 midterm,afterly type 5 final exam results.\n");
    for (i = 0; i < 10; i++)
    {

        scanf("%d", &grades[i]);
    }
    max = grades[0], min = grades[0];
    for (i = 0; i < 5; i++)
    {
        if (max < grades[i])
        {
            max = grades[i];
        }
        if (min > grades[i])
        {
            min = grades[i];
        }

        sum = sum + (float)grades[i];
    }
    printf("maximum midterm grade is=>%d\nminimum midterm grade is =>%d\nAverage grade is=>%f\n", max, min, sum / 5);
    max = grades[5], min = grades[5], sum = 0;
    for (i = 5; i < 10; i++)
    {
        if (max < grades[i])
        {
            max = grades[i];
        }
        if (min > grades[i])
        {
            min = grades[i];
        }
        sum = sum + (float)grades[i];
    }
    printf("maximum final grade is=>%d\nminimum final grade is =>%d\nAverage grade is=>%f\n", max, min, (float)sum / 5);
    for (i = 0; i < 5; i++)
    {

        sum = (40 * grades[i]) / 100 + (60 * grades[i + 5]) / 100;

        if (sum >= 90)
        {
            printf("%d. students Letter grade is AA\n", i + 1);
        }
        else if (sum > 85)
        {
            printf("%d. students Letter grade is BA\n", i + 1);
        }
        else if (sum > 80)
        {
            printf("%d. students Letter grade is BB\n", i + 1);
        }
        else if (sum > 75)
        {
            printf("%d. students Letter grade is CB\n", i + 1);
        }
        else if (sum > 60)
        {
            printf("%d. students Letter grade is CC\n", i + 1);
        }
        else if (sum > 45)
        {
            printf("%d. students Letter grade is DC\n", i + 1);
        }
        else if (sum > 40)
        {
            printf("%d. students Letter grade is DD\n", i + 1);
        }
        else if (sum > 30)
        {
            printf("%d. students Letter grade is FD\n", i + 1);
        }
        else
        {
            printf("%d. students Letter grade is FF\n", i + 1);
        }
    }

    return 0;
}