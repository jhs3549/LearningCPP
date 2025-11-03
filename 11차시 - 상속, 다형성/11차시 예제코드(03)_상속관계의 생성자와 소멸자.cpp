// Base Class와 Derived Class의 생성자와 소멸자 호출 순서 예제
#include <iostream>
using namespace std;

class Shape
{
private:
    int mX;
    int mY;
public:
    Shape()
    {
        cout << "[" << this << "] Shape() 생성자 호출" << endl;
    }
    Shape(int x, int y) : mX(x), mY(y)
    {
        cout << "[" << this << "] Shape(int x, int y) 생성자 호출" << endl;
    }
    ~Shape()
    {
        cout << "[" << this << "] ~Shape() 소멸자 호출" << endl;
    }
};
class Rectangle : public Shape
{
private:
    int mWidth;
    int mHeight;
public:
    Rectangle()
    {
        mWidth = 0;
        mHeight = 0;
        cout << "[" << this << "] Rectangle() 생성자 호출" << endl;
    }
    Rectangle(int x, int y, int width, int height) : Shape(x, y)
    {
        mWidth = width;
        mHeight = height;
        cout << "[" << this << "] Rectangle(int x, int y, int width, int height) 생성자 호출" << endl;
    }
    ~Rectangle()
    {
        cout << "[" << this << "] ~Rectangle() 소멸자 호출" << endl;
    }
};

int main()
{
    cout << "=== Rectangle 객체 rect1 생성 ===" << endl;
    Rectangle rect1;
    cout << "=== Rectangle 객체 rect2 생성 ===" << endl;
    Rectangle rect2(10, 20, 30, 40);
    cout << "=== Rectangle 객체 rect2 소멸 ===" << endl;

    return 0;
}