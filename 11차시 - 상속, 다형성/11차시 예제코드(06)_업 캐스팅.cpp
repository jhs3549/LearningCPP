// Up-Casting 기본예제
// Up-Casting: 자식 클래스의 객체(인스턴스)를 부모 클래스 타입의 포인터나 참조자로 변환하는 것
// 여러 자식 클래스를 하나의 부모 클래스 타입으로 다룰 수 있게 해주어, 공통 인터페이스를 제공하고 코드의 유연성과 재사용성을 높여줌
#include <iostream>
using namespace std;

class Animal
{
public:
    void Speak()
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
    Animal* animalPtr4 = new Bird(); // Up-Casting: Bird* -> Animal

    animalPtr1->Speak(); // Animal speaks!
    animalPtr2->Speak(); // Animal speaks!
    animalPtr3->Speak(); // Animal speaks!
    animalPtr4->Speak(); // Animal speaks!

    return 0;
}