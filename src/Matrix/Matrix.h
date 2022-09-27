#include <vector>

using namespace std;

class Matrix
{
private:
    vector<vector<float>> m;

    int* verifyOrder();

public:
    int* order;
    
    Matrix(vector<vector<float>> m);

    static float Det(Matrix m);
};