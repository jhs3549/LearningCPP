// 업 캐스팅 시 생성자 & 소멸자 호출 예제
#include <iostream>
using namespace std;

class GrandParent
{
public:
    GrandParent()
    {
        cout << "GrandParent 생성자 호출" << endl;
    }
    virtual void func() 
    {
        cout << "GrandParent func()" << endl;
    }
    virtual ~GrandParent()
    {
        cout << "GrandParent 소멸자 호출" << endl;
    }
};
class Parent : public GrandParent
{
public:
    Parent()
    {
        cout << "Parent 생성자 호출" << endl;
    }
    void func() 
    {
        cout << "Parent func()" << endl;
    }
    ~Parent()
    {
        cout << "Parent 소멸자 호출" << endl;
    }
};
class Child : public Parent
{
public:
    Child()
    {
        cout << "Child 생성자 호출" << endl;
    }
    void func() 
    {
        cout << "Child func()" << endl;
    }
    ~Child()
    {
        cout << "Child 소멸자 호출" << endl;
    }
};

int main()
{
    cout << "=== Up-Casting 생성자 호출 예제 ===" << endl;

    cout << endl << "[=== Child 객체를 GrandParent*로 업 캐스팅 ===]" << endl;
    GrandParent* pGrandParent1 = new Child(); 
    pGrandParent1->func();
    delete pGrandParent1;

    cout << endl << "[=== Parent 객체를 GrandParent*로 업 캐스팅 ===]" << endl;
    GrandParent* pGrandParent2 = new Parent();
    pGrandParent2->func();
    delete pGrandParent2;

    cout << endl << "[=== GrandParent 객체를 GrandParent*로 생성 ===]" << endl;
    GrandParent* pGrandParent3 = new GrandParent();
    pGrandParent3->func();
    delete pGrandParent3;

    cout << endl << "[=== Child 객체를 Parent*로 업 캐스팅 ===]" << endl;
    Parent* pParent = new Child();
    pParent->func();
    delete pParent;

    cout << endl << "[=== Parent 객체를 Parent*로 생성 ===]" << endl;
    Parent* pParent2 = new Parent();
    pParent2->func();
    delete pParent2;

    cout << endl << "[=== Child 객체를 Child*로 생성 ===]" << endl;
    Child* pChild = new Child();
    pChild->func();
    delete pChild;

    return 0;
}