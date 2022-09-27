#include <iostream>
#include <vector>

#include "Vector3/Vector3.h"
#include "Matha/Matha.h"
#include "Matrix/Matrix.h"

using namespace std;

int main()
{
  vector<vector<float>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  Matrix m = Matrix(v);
  cout << m.order << "\n";

  return 0;
}