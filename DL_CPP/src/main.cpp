#include <stdio.h>
#include <vector>
#include <stdlib.h>
// My libraries
#include "matrix.hpp"

#define COLS 3
#define ROWS 3

int main()
{
    // Building my own 2 by 2 matrix
    printf("Hello world\n");
    Matrix mat = Matrix(ROWS, COLS);
    printf("cols: %d\n", mat.get_cols());
    printf("rows: %d\n", mat.get_rows());
    mat.print_mat();
    double** new_data = (double**) calloc(ROWS*COLS, sizeof(double));
    int k = 1;
    for (int i = 0; i < ROWS; i++)
    {
        new_data[i] = (double*) calloc(COLS, sizeof(double));
        for (int j = 0; j < COLS; j++)
        {
            //new_data[i].push_back(k);
            new_data[i][j] = k;
            k++;
        }
    }

    mat.add_values(new_data);
    mat.print_mat();

    return 0;
}
