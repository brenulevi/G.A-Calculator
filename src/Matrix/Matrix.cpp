#include "Matrix.h"

Matrix::Matrix(vector<vector<float>> new_m)
{
    m = new_m;
    order = verifyOrder();
}

int* Matrix::verifyOrder()
{
    int order[2];
    order[0] = m.size();
    order[1] = m[0].size();
    return order;
}

