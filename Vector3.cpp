#include <iostream>
#include <cmath>

using namespace std;

class Vector3
{
public:
  int x;
  int y;
  int z;

  double magnitude;

  Vector3(int new_x, int new_y, int new_z)
  {
    x = new_x;
    y = new_y;
    z = new_z;

    magnitude = sqrt((x * x) + (y * y));
  }

  static Vector3 CrossProduct(Vector3 a, Vector3 b)
  {
    return Vector3((a.y * b.z) - (a.z * b.y), (a.z * b.x) - (a.x * b.z), (a.x * b.y) - (a.y * b.x));
  }

  static float ScalarProduct(Vector3 a, Vector3 b)
  {
    return (a.x * b.x) + (a.y * b.y) + (a.z * b.z);
  }

  static float Distance(Vector3 a, Vector3 b)
  {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2) + pow(b.z - a.z, 2));
  }

  Vector3
  operator+(Vector3 const &v)
  {
    Vector3 res(0, 0, 0);
    res.x = x + v.x;
    res.y = y + v.y;
    res.z = z + v.z;
    return res;
  }

  Vector3 operator-(Vector3 const &v)
  {
    Vector3 res(0, 0, 0);
    res.x = x - v.x;
    res.y = y - v.y;
    res.z = z - v.z;
    return res;
  }

  Vector3 operator*(float const k)
  {
    Vector3 res(0, 0, 0);
    res.x = x * k;
    res.y = y * k;
    res.z = z * k;
    return res;
  }

  bool operator==(Vector3 const &v)
  {
    if (x == v.x && y == v.y && z == v.z)
    {
      return true;
    }
    else
    {
      return false;
    }
  }

  friend ostream &operator<<(ostream &output, const Vector3 &v)
  {
    output << "(" << v.x << ", " << v.y << ", " << v.z << ")";
    return output;
  }

  friend istream &operator>>(istream &input, Vector3 &v)
  {
    input >> v.x >> v.y >> v.z;
    return input;
  }
};