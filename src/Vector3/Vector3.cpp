#include "Vector3.h"

using namespace std;

Vector3::Vector3(float new_x, float new_y, float new_z)
{
  x = new_x;
  y = new_y;
  z = new_z;

  magnitude = sqrt((x * x) + (y * y));
}

Vector3 Vector3::CrossProduct(Vector3 a, Vector3 b)
{
  return Vector3((a.y * b.z) - (a.z * b.y), (a.z * b.x) - (a.x * b.z), (a.x * b.y) - (a.y * b.x));
}

float Vector3::ScalarProduct(Vector3 a, Vector3 b)
{
  return (a.x * b.x) + (a.y * b.y) + (a.z * b.z);
}

float Vector3::Distance(Vector3 a, Vector3 b)
{
  return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2) + pow(b.z - a.z, 2));
}

Vector3 Vector3::operator+(Vector3 const &v)
{
  Vector3 res(0, 0, 0);
  res.x = x + v.x;
  res.y = y + v.y;
  res.z = z + v.z;
  return res;
}

Vector3 Vector3::operator-(Vector3 const &v)
{
  Vector3 res(0, 0, 0);
  res.x = x - v.x;
  res.y = y - v.y;
  res.z = z - v.z;
  return res;
}

Vector3 Vector3::operator*(float const k)
{
  Vector3 res(0, 0, 0);
  res.x = x * k;
  res.y = y * k;
  res.z = z * k;
  return res;
}

bool Vector3::operator==(Vector3 const &v)
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

ostream &operator<<(ostream &output, const Vector3 &v)
{
  output << "(" << v.x << ", " << v.y << ", " << v.z << ")";
  return output;
}

istream &operator>>(istream &input, Vector3 &v)
{
  input >> v.x >> v.y >> v.z;
  return input;
}