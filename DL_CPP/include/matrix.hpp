#ifndef matrix
#define matrix
#include <vector>
/*
    Store all the important structures to be used in the code, such as: matrix
    structs,
*/
class Matrix
{

private:
    int nrows, ncols;
    std::vector<std::vector<double>> data;

public:
    Matrix(int _rows, int _cols);

    int get_rows() { return nrows; }
    int get_cols() { return ncols; }

    std::vector<double> &operator[](int index) { return data[index]; }

    void print_mat();
    //void add_values(std::vector<std::vector<double>> new_data);
    void add_values(double** new_data);
};
#endif