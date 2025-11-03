// 가상함수 기본예제
// 업캐스팅된 부모 포인터를 통해 호출할 때도 자식 클래스의 함수가 호출되도록 하는 기법

#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void Speak()
    {
        cout << "Animal speaks!" << endl;
    }
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
    Dog myDog;
    Bird myBird;

    Animal* animalPtr1 = &myDog; // Up-Casting: Dog* -> Animal*
    Animal* animalPtr2 = &myBird; // Up-Casting: Bird* -> Animal*
    Animal* animalPtr3 = new Dog(); // Up-Casting: Dog* -> Animal*
    Animal* animalPtr4 = new Bird(); // Up-Casting: Bird* -> Animal*

    animalPtr1->Speak(); // Dog barks!
    animalPtr2->Speak(); // Bird chirps!
    animalPtr3->Speak(); // Dog barks!
    animalPtr4->Speak(); // Bird chirps!

    return 0;
}