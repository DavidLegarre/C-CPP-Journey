#include <stdlib.h>
#include <stdio.h>
#include "utils.h"

mat *build_mat(unsigned int rows, unsigned int cols)
{
    // Allocate memory for the struct
    mat *m = calloc(1, sizeof(*m));

    m->rows = rows;
    m->cols = cols;
    
    // Allocate memory for data
    m->data = calloc(m->rows, sizeof(*m->data));
    for (unsigned int i = 0; i < m->rows; i++)
    {
        m->data[i] = calloc(m->cols, sizeof(**m->data));
    }

    return m;
    
}

void print_mat(mat *A)
{
    for (unsigned int i = 0; i < A->rows; i++)
    {
        printf("|");
        for (unsigned int j = 0; j < A->cols; j++)
        {
            printf(" %.2f ", A->data[i][j]);
        }
        printf("|\n");
    }
    
}