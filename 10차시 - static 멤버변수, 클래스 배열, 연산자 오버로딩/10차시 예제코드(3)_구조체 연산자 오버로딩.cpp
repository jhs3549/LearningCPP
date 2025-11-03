#include <iostream>
using namespace std;

struct Vector
{
    double x;
    double y;
    double z;
};
Vector operator+(const Vector& v1, const Vector& v2)
{
    return Vector{ v1.x + v2.x, v1.y + v2.y, v1.z + v2.z };
}

int main()
{
    Vector v1{ 1.0, 2.0, 3.0 };
    Vector v2{ 4.0, 5.0, 6.0 };
    
    auto v3 = v1 + v2;

    cout << "v3: (" << v3.x << ", " << v3.y << ", " << v3.z << ")" << endl;

    return 0;
}