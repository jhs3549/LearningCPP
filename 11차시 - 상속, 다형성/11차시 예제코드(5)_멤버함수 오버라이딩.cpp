#include <iostream>
using namespace std;

class Parent
{
public:
    void Print()
    {
        cout << "Parent's Print()" << endl;
    }
};
class Child : public Parent
{
public:
    void Print()
    {
        Parent::Print(); // 부모 클래스의 Print()를 호출하고 싶을 때는 부모 클래스 이름(식별자)을 명시
        cout << "Child's Print()" << endl;
    }
};

int main()
{
    Child child;
    child.Print();

    return 0;
}