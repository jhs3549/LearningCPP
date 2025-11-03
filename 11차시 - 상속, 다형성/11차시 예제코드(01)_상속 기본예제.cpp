// 상속 기본예제
#include <iostream>
using namespace std;

class Car
{
    int speed;
public:
    void SetSpeed(int s) { speed = s; }
    int GetSpeed() const { return speed; }
};

class SportsCar : public Car
{
    bool turbo;
public:
    void SetTurbo(bool t) { turbo = t; }
    bool GetTurbo() const { return turbo; }
};

int main()
{
    SportsCar mySportsCar;
    mySportsCar.SetSpeed(150);
    mySportsCar.SetTurbo(true);

    cout << "Speed: " << mySportsCar.GetSpeed() << " km/h" << endl;
    cout << "Turbo: " << (mySportsCar.GetTurbo() ? "On" : "Off") << endl;

    return 0;
}