#include <iostream>

#include "Vector3/Vector3.h"
#include "Matha/Matha.h"

using namespace std;

int main()
{
  Vector3 v1 = Vector3(10, 2, 4);
  Vector3 v2 = Vector3(2, 10, 3);

  cout << Vector3::Distance(v1, v2);

  return 0;
}