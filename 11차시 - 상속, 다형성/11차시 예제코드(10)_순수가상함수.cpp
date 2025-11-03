// 순수가상함수 예제
#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void Speak() = 0; // 순수가상함수 선언
};
class Dog : public Animal
{
public:
    void Speak()
    {
        cout << "Dog barks!" << endl;
    }
};
class Bird : public Animal
{
public:
    void Speak()
    {
        cout << "Bird chirps!" << endl;
    }
};

int main()
{
    Animal* pa1 = new Dog();
    Animal* pa2 = new Bird();

    pa1->Speak(); // Dog barks!
    pa2->Speak(); // Bird chirps!

    delete pa1;
    delete pa2;

    return 0;
}