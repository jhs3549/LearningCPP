#include <iostream>
using namespace std;

void f(int i)
{
    cout << "f(int): " << i << endl;
}
void f(int* p)
{
    cout << "f(int*): " << p << endl;
}

int main()
{
    f(NULL); // NULL은 포인터로 해석됨
    f(nullptr); // nullptr은 포인터로 해석됨

    return 0;
}