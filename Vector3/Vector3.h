#include <iostream>
#include <cmath>

using namespace std;

class Vector3
{
public:
  float x;
  float y;
  float z;

  double magnitude;

  Vector3(float new_x, float new_y, float new_z);

  static Vector3 CrossProduct(Vector3 a, Vector3 b);

  static float ScalarProduct(Vector3 a, Vector3 b);

  static float Distance(Vector3 a, Vector3 b);

  Vector3 operator+(Vector3 const &v);

  Vector3 operator-(Vector3 const &v);

  Vector3 operator*(float const k);

  bool operator==(Vector3 const &v);

  friend ostream &operator<<(ostream &output, const Vector3 &v);

  friend istream &operator>>(istream &input, Vector3 &v);
};

ostream &operator<<(ostream &ostr, const Vector3 &stud);