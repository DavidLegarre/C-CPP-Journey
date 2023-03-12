#ifndef matrix
#define matrix

using std::vector;

#include <vector>
/*
    Store all the important structures to be used in the code, such as: matrix
    structs,
*/
class Matrix
{

private:
    int nrows, ncols;
    vector<vector<double>> data;

public:
    Matrix(int _rows, int _cols, double init);
    Matrix(const char *);
    Matrix(const Matrix &);
    //~Matrix();

    int get_rows() { return nrows; }
    int get_cols() { return ncols; }

    //Matrix operator+(Matrix &);
    //Matrix operator-(Matrix &);
    //Matrix operator*(Matrix &);
    //Matrix traspose();

    void print_mat();
    void set_data(vector<vector<double>> new_data);
};
#endif