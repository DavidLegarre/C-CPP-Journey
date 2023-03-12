#include <stdio.h>
#include <vector>
#include <stdlib.h>
// My libraries
#include "matrix.hpp"

#define COLS 3
#define ROWS 3

using std::vector;

int main()
{
    // Building my own 2 by 2 matrix
    printf("Hello world\n");
    Matrix mat = Matrix(ROWS, COLS, 1);
    printf("cols: %d\n", mat.get_cols());
    printf("rows: %d\n", mat.get_rows());
    mat.print_mat();
    vector<vector<double>> new_data;
    new_data.resize(ROWS);
    int k = 1;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (j == 0)
            {
                new_data[i].resize(COLS);
            }
            new_data[i][j] = k;
            k++;
        }
    }

    mat.set_data(new_data);
    mat.print_mat();

    return 0;
}
