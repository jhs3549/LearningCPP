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

    bool operator==(const Vector& v) const
    {
        return (mX == v.mX) && (mY == v.mY) && (mZ == v.mZ);
    }
    bool operator!=(const Vector& v) const
    {
        return (mX != v.mX) || (mY != v.mY) || (mZ != v.mZ);
    }
};

int main()
{
    Vector v1(1.0, 2.0, 3.0);
    Vector v2(1.0, 2.0, 3.0);
    Vector v3(4.0, 5.0, 6.0);

    if (v1 == v2)
        cout << "v1 is equal to v2" << endl;
    else
        cout << "v1 is not equal to v2" << endl;

    if (v1 != v3)
        cout << "v1 is not equal to v3" << endl;
    else
        cout << "v1 is equal to v3" << endl;

    return 0;
}