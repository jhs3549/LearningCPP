#include <iostream>
using namespace std;

class Vector
{
private:
    double mX;
    double mY;
    double mZ;

public:
    inline double GetX() const { return mX; }
    inline double GetY() const { return mY; }
    inline double GetZ() const { return mZ; }

    Vector(double x, double y, double z)
    : mX(x), mY(y), mZ(z) {}

    Vector operator+(const Vector& v)
    {
        return Vector(mX + v.mX, mY + v.mY, mZ + v.mZ);
    }

};

int main()
{
    Vector v1(1.0, 2.0, 3.0);
    Vector v2(4.0, 5.0, 6.0);

    auto v3 = v1 + v2;

    cout << "v3: (" << v3.GetX() << ", " << v3.GetY() << ", " << v3.GetZ() << ")" << endl;

    return 0;
}