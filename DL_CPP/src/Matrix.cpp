/*
    Matrix class
*/
#include <vector>
#include <iostream>
#include "matrix.hpp"

Matrix::Matrix(int _rows, int _cols, double init)
{
    nrows = _rows;
    ncols = _cols;
    data.resize(nrows);
    for (int i = 0; i < nrows; i++)
    {
        for (int j = 0; j < ncols; j++)
        {
            data[i].resize(ncols, init);
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

void Matrix::set_data(vector<vector<double>> new_data)
{
    for (int i = 0; i < this->nrows; i++)
    {
        for (int j = 0; j < this->ncols; j++)
        {
            this->data[i][j] = new_data[i][j];
        }
    }
};