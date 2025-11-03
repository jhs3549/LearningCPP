#include <iostream>

using namespace std;

class Pizza
{
    public:
        int size;
        Pizza(int s) { size = s; }    
};

void makeDoubleSize(Pizza& p) // 참조자로 전달
{
    p.size *= 2;
}

int main()
{
    Pizza pizza(10);
    makeDoubleSize(pizza);
    cout << "Pizza size: " << pizza.size << endl; // 원본 객체가 변경됨
    
    return 0;
}