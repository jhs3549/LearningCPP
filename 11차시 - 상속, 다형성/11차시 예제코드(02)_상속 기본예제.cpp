#include <iostream>
using namespace std;

class Vehicle
{
protected:
    int speed;
public:
    void SpeedUp() { speed += 10; }
    void SpeedDown() { speed -= 10; }
};

class Car : public Vehicle
{

};
class Truck : public Vehicle
{
protected:
    int mTrunkVolume;
    int mTrunkWeight;
public:
    void SetTrunkVolume(int volume) { mTrunkVolume = volume; }
    int GetTrunkVolume() const { return mTrunkVolume; }
    void SetTrunkWeight(int weight) { mTrunkWeight = weight; }
    int GetTrunkWeight() const { return mTrunkWeight; }
};
class Bus : public Vehicle
{
protected:
    int mNumPassengers;
public:
    void AddNumPassengers(int num) { mNumPassengers += num; }
    void SubNumPassengers(int num) { mNumPassengers -= num; }
    int GetNumPassengers() const { return mNumPassengers; }
};

int main()
{
    Car car;
    Truck truck;
    Bus bus;

    car.SpeedUp();

    truck.SpeedUp();
    truck.SetTrunkVolume(5000);
    truck.SetTrunkWeight(2000);

    bus.SpeedUp();
    bus.AddNumPassengers(30);
    bus.SubNumPassengers(5);

    return 0;
}