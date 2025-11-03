#include <iostream>
using namespace std;

class Circle 
{
public:
    int x, y;
    int radius;
    void Print()
    {
        cout << "Circle(" << "x=" << x << ", y=" << y << ", raidus=" << radius << ")"<< endl;
    }
};

int main()
{
    Circle circles[10];
    for (Circle& c : circles)
    {
        c.x = rand() % 500;
        c.y = rand() % 300;
        c.radius = rand() % 100;
    }
    for (Circle& c : circles)
        c.Print();

    return 0;
}