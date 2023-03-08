#include <stdio.h>
// My libraries
#include "lalgebra.h"
#include "utils.h"

int main()
{
    // Building my own 2 by 2 matrix
    printf("Hello world\n");
    mat *A = build_mat(2, 2);

    double k = 1;
    for (int i = 0; i < A->cols; i++)
    {
        for (int j = 0; j < A->rows; j++)
        {
            A->data[i][j] = k;
            k++;
        }
    }

    print_mat(A);

    return 0;
}
