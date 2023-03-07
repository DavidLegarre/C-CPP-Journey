#include <stdio.h>

void print_mat(int* A, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        printf("|");
        for (int j = 0; j < cols; j++)
        {
            printf(" %d ", A[i*cols+j]);
        }
        printf("|\n");
    }
    
}