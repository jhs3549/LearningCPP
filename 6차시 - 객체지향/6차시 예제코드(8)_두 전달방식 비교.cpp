#include <iostream>

using namespace std;

class Pizza
{
    public:
        int size;
        Pizza(int s) { size = s; }    
};

void callByValue(Pizza p) // 값으로 전달
{
    cout << "[Call by Value]" << endl;
    cout << "매개변수 p의 주소: " << &p << endl; // 복사된 객체 p의 주소 출력
    cout << "매개변수 p의 size의 주소: " << &(p.size) << endl; // p.size의 주소 출력
}

void callByReference(Pizza& p) // 참조자로 전달
{
    cout << "[Call by Reference]" << endl;
    cout << "매개변수 p의 주소: " << &p << endl; // 원본 객체의 주소 출력
    cout << "매개변수 p의 size의 주소: " << &(p.size) << endl; // p.size의 주소 출력
}

int main()
{
    Pizza pizza(10);
    cout << "원본 객체 pizza의 주소: " << &pizza << endl; // 원본 객체 pizza의 주소 출력
    cout << "원본 객체 pizza의 size의 주소: " << &(pizza.size) << endl; // pizza.size의 주소 출력

    callByValue(pizza); // 값으로 전달
    callByReference(pizza); // 참조자로 전달

    return 0;
}