#include <stdio.h>
#include <stdlib.h>
int main()
{

    int sum = 0, i, j, a[4][2] = {{0, 0}, {1, 2}, {2, 4}, {3, 6}};

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sum = sum + a[i][j];
        }
    }
    printf("%d", sum);
    return 0;
}