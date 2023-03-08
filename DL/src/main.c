#include <stdio.h>
// My libraries
#include "lalgebra.h"
#include "utils.h"

int main()
{
    // Building my own 2 by 2 matrix
    printf("Hello world\n");
    mat *A = build_mat(2, 2);
    mat *B = build_mat(2, 2);

    A->data[0][0] = 0;
    A->data[0][1] = 1;
    A->data[1][0] = 2;
    A->data[1][1] = 3;

    B->data[0][0] = 3;
    B->data[0][1] = 2;
    B->data[1][0] = 1;
    B->data[1][1] = 0;

    mat *C = dot_prod(A, B);

    print_mat(C);
    
    return 0;
}
