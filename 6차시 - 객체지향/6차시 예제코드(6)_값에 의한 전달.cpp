#include <iostream>

using namespace std;

class Pizza
{
    public:
        int size;
        Pizza(int s) { size = s; }    
};

void makeDoubleSize(Pizza p) // 객체가 복사되어 전달됨
{
    p.size *= 2;
}

int main()
{
    Pizza pizza(10);
    makeDoubleSize(pizza);
    cout << "Pizza size: " << pizza.size << endl; // 원본 객체는 변경되지 않음
    
    return 0;
}