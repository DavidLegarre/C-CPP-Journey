/*
    Matrix class
*/
#include <vector>
#include <iostream>
#include "matrix.hpp"

Matrix::Matrix(int _rows, int _cols)
{

    nrows = _rows;
    ncols = _cols;
    data.reserve(nrows * ncols);
    for (int i = 0; i < nrows; i++)
    {
        for (int j = 0; j < ncols; j++)
        {
            data[i].push_back(0);
        }
    }
};

void Matrix::print_mat()
{
    for (int i = 0; i < nrows; i++)
    {
        printf("| ");
        for (int j = 0; j < ncols; j++)
        {
            printf(" %0.2f ", data[i][j]);
        }
        printf(" |\n");
    }
    printf("\n");
};

void Matrix::add_values(double** new_data)
{
    for (int i = 0; i < nrows; i++)
    {
        for (int j = 0; j < ncols; j++)
        {
            data[i][j] = new_data[i][j];
        }
    }
};
