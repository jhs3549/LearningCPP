#include <iostream>
using namespace std;

class Circle 
{
    int x, y;
    int radius;
    static int count;
public:
    Circle() : x(0), y(0), radius(0)
    {
        count++;
    }
    Circle(int x, int y, int r) : x(x), y(y), radius(r)
    {
        count++;
    }
    int GetCount()
    {
        return count;
    }
};
int Circle::count = 0;

int main()
{
    Circle c1;
    Circle c2;

    cout << "Number of Circle objects (c1): " << c1.GetCount() << endl;
    cout << "Number of Circle objects (c2): " << c2.GetCount() << endl;

    return 0;
}