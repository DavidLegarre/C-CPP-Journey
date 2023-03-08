#include <stdio.h>
// My libraries
#include "utils.h"

#define CANNOT_MULITPLY \
  "Cannot calculate dot product of two incompatible matrices"

mat *dot_prod(mat *A, mat *B)
{
    // Check if dot_prod can be performed
    if (A->cols != B->rows)
    {
        printf(CANNOT_MULITPLY);
        return NULL;
    }
    
    // Allocate memory for new matrix
    mat *C = build_mat(A->rows, B->cols);

    // Operate
    for (int i = 0; i < C->rows; i++)
    {
        for (int j = 0; j < C->cols; j++)
        {
            for (int k = 0; k < A->cols; k++)
            {
                C->data[i][j] += A->data[i][k]*B->data[k][j];
            }
        }
    }

    return C;
    
}