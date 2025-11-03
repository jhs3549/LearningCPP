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
    Vector(double x, double y, double z)
    : mX(x), mY(y), mZ(z) {}

    Vector& operator=(const Vector& v)
    {
        mX = v.mX;
        mY = v.mY;
        mZ = v.mZ;
        return *this;
    }

    void Print() const
    {
        cout << "Vector(" << "x=" << mX << ", y=" << mY << ", z=" << mZ << ")"<< endl;
    }
};

int main()
{
    Vector v1(1.0, 2.0, 3.0);
    Vector v2(4.0, 5.0, 6.0);
    Vector v3(0.0, 0.0, 0.0);

    v2 = v1; // 대입 연산자 호출
    v2.Print();

    v1 = v2 = v3; // 연쇄 대입 연산자 호출
    v1.Print();

    return 0;
}