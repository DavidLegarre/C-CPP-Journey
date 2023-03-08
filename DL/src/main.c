#include <stdio.h>
// My libraries
#include "lalgebra.h"
#include "utils.h"

int main()
{
    // Building my own 2 by 2 matrix
    printf("Hello world\n");
    mat *A = build_mat(3, 2);

    printf("Before:\n");
    print_mat(A);

    build_def(A);

    printf("\nAfter:\n");
    print_mat(A);

    A = Transpose(A);
    printf("\nTransposed:\n");
    print_mat(A);

    return 0;
}
