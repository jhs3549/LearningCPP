#include <iostream>

using namespace std;

double square(int x);
double square(double x);

int main() 
{
    auto a = square(10);
    auto b = square(2.0);
    cout << a << endl;
    cout << b << endl;
    
    return 0;
}

double square(int x)
{
    cout << "square for int is called." << endl;
    return x * x;
}
double square(double x)
{
    cout << "square for double is called." << endl;
    return x * x;
}