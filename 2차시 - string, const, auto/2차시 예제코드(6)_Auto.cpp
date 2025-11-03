#include <iostream>

using namespace std;

auto add(int a, int b)
{
    return a + b;
}

int main() 
{
    auto result = add(3, 5);
    cout << "3 + 5 = " << result << endl;

    return 0;
}