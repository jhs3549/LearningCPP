// Automatic Type Deduction with 'auto'
#include <iostream>
#include <typeinfo>

using namespace std;

int main() 
{
    auto a = 3;
    auto b = 3.14f;

    cout << a << endl;
    cout << "Type of a: " << typeid(a).name() << endl;
    cout << "Size of the type: " << sizeof(a) << endl << endl;
    cout << b << endl;
    cout << "Type of a: " << typeid(b).name() << endl;
    cout << "Size of the type: " << sizeof(b) << endl << endl;

    return 0;
}