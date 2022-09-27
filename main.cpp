#include <iostream>
#include "Vector3/Vector3.h"

using namespace std;

int main()
{
  Vector3 v1 = Vector3(1, 2, 3);
  Vector3 v2 = Vector3(1, 2, 3);

  cout << (v1 == v2) << '\n';
  cout << v1 + v2 << "\n";
  cout << v1 - v2 << "\n";

  cout << Vector3::CrossProduct(v1, v2) << "\n";

  return 0;
}