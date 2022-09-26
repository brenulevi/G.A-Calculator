#include <iostream>
#include <math.h>

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
        }
         
        static Vector3 CrossProduct(Vector3 a, Vector3 b)
        {
            return Vector3((a.y * b.z) - (a.z * b.y), (a.z * b.x) - (a.x * b.z), (a.x * b.y) - (a.y * b.x));
        }

        static float ScalarProduct(Vector3 a, Vector3 b)
        {
            return (a.x * b.x) + (a.y * b.y) + (a.z * b.z);
        }

        Vector3 operator + (Vector3 const &obj)
        {
            Vector3 res(0, 0, 0);
            res.x = x + obj.x;
            res.y = y + obj.y;
            res.z = z + obj.z;
            return res;
        }

        friend ostream &operator << (ostream &output, const Vector3 &v)
        {
            output << "(" << v.x << ", " << v.y << ", " << v.z << ")";
            return output;
        }

        friend istream &operator >> (istream &input, Vector3 &v)
        {
            input >> v.x >> v.y >> v.z;
            return input;
        }
};

int main()
{
    Vector3 v1 = Vector3(1,2,3);
    Vector3 v2 = Vector3(2,4,6);

    Vector3 v3 = v1 + v2;
    cout << v3 << "\n";

    return 0;
}