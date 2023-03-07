#include <stdio.h>
#include "lalgebra.h"

int main()
{
    // Print 3 by 3 matrix
    int A[3][3];

    int k = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            A[i][j]=k;
            k++;
        }
    }
    
    print_mat(&A, 3, 3);

    return 0;
}
