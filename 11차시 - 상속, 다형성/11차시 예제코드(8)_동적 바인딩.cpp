// 동적 바인딩 기본예제
// 가상 함수(virtual function)를 사용하여, 실행 시간(runtime)에 호출될 함수가 결정되도록 하는 기법
#include <iostream>
#include <string>
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
class Cat : public Animal
{
public:
    void Speak()
    {
        cout << "Cat meows!" << endl;
    }
};

int main()
{
    Animal* pa;

    string input;
    while (true)
    {
        cout << "동물 종류를 입력하세요 (dog, bird, cat) 또는 종료하려면 quit: ";
        cin >> input;

        if (input == "quit")
            break;
        else if (input == "dog")
            pa = new Dog();
        else if (input == "bird")
            pa = new Bird();
        else if (input == "cat")
            pa = new Cat();
        else
        {
            cout << "알 수 없는 동물 종류입니다." << endl;
            continue;
        }

        pa->Speak(); // 동적 바인딩에 의해 올바른 Speak() 호출

        delete pa; // 동적으로 할당된 메모리 해제
    }
}