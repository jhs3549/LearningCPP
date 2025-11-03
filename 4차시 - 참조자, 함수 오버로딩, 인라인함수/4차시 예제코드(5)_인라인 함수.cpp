#include <iostream>

using namespace std;

inline int square(int x)
{
    return x * x;
}

int main() 
{
    int a = 3;
    auto b = square(a);

    return 0;
}