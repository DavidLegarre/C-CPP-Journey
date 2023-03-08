#ifndef UTILITIES
#define UTILITIES
/*
    Store all the important structures to be used in the code, such as: matrix
    structs,
*/
typedef struct matrix
{
    unsigned int rows;
    unsigned int cols;
    double **data;
} mat;

mat *build_mat(unsigned int rows, unsigned int cols);

#endif