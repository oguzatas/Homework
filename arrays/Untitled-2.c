#include <stdio.h>
#define SIZE 3
int main()
{

    int A[SIZE][SIZE];
    int B[SIZE][SIZE];
    int C[SIZE][SIZE];

    int row, col;

    for (row = 0; row < SIZE; row++)
    {

        for (col = 0; col < SIZE; col++)

        {
            scanf("%d", &A[row][col]);
        }
    }

    printf("\nEnter elements in matrix B of size 3x3: \n");

    for (row = 0; row < SIZE; row++)
    {

        for (col = 0; col < SIZE; col++)

        {
            scanf("%d", &B[row][col]);
        }
    }

    for (row = 0; row < SIZE; row++)
    {

        for (col = 0; col < SIZE; col++)

        {
            C[row][col] = A[row][col] + B[row][col];
        }
    }

    printf("\nSum Of matrices a+b\n");
    for (row = 0; row < SIZE; row++)
    {

        for (col = 0; col < SIZE; col++)

        {
            printf("%d ", C[row][col]);
        }
        printf("\n");
    }
    

    return 0;
}