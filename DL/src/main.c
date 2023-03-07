#include <stdio.h>
#include "lalgebra.h"

int main()
{
    // Print 2 by 2 matrix
    int A[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            A[i][j]=i;
        }
    }
    
    print_mat(&A, 2, 2);

    return 0;
}
