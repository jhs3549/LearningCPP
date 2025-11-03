// 멤버함수 오버라이딩 기본예제
// 부모 클래스의 함수를 자식 클래스에서 재정의하여, 상황에 맞게 같은 이름의 함수를 다르게 동작하도록 만드는 기법
#include <iostream>
using namespace std;

class Animal
{
public:
    void Speak()
    {
        cout << "Animal speaks" << endl;
    }
};
class Dog : public Animal
{
public:
    void Speak()
    {
        cout << "Dog barks" << endl;
    }
};
class Cat : public Animal
{
public:
    void Speak()
    {
        cout << "Cat meows" << endl;
    }
};
class Cow : public Animal
{
public:
    void Speak()
    {
        cout << "Cow moos" << endl;
    }
};

int main()
{
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();
    Animal* animal3 = new Cow();

    animal1->Speak(); // Animal speaks
    animal2->Speak(); // Animal speaks
    animal3->Speak(); // Animal speaks

    delete animal1;
    delete animal2;
    delete animal3;

    return 0;
}