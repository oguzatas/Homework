#include <stdio.h>
#include <stdlib.h>
int main()
{
    int students[10][2], mingrade[10], minlecture,i,j,ave[10];
    float ave2=0;

    for (size_t i = 0; i < 10; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            scanf("%d", &students[i][j]);
        }
    }

    for (size_t i = 0; i < 10; i++)
    {

        if (students[i][0] < students[i][1])
        {
            mingrade[i] = students[i][0];
        }

        else
        {
            mingrade[i] = students[i][1];
        }
    }

    for (size_t i = 0; i < 10; i++)
    {
        printf("The %d. students minimum grade is %d\n", i+1, mingrade[i]);
    }

    for (size_t j = 0; j < 2; j++)
    {
        minlecture=0;
        for (size_t i = 0; i < 10; i++)
        {
            if (students[i][j] < students[i + 1][j])
            {
                minlecture = students[i][j];
            }
            
        }
        printf("%d. lecture's minimum grade is %d\n",j+1,minlecture);
    }

    for (size_t i = 0; i < 10; i++)
    {
        ave[i]= (students[i][0] + students[i][1]) /2;
    }
    
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d. students average grade is %d \n",i+1,ave[i]);
    }
        for (size_t j = 0; j < 2; j++)
    {
        minlecture=0;
        for (size_t i = 0; i < 10; i++) 
        {
            ave2=ave2 + students[i][j];

        }
        printf("%d. lectures average grade is %d\n",j+1,ave2/10);

    }








    return 0;
}