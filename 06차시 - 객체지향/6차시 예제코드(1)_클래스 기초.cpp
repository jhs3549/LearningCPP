#include <iostream>
#include <string>

using namespace std;

class Circle
{
    public:
        int radius; // 멤버 변수
        string color; // 멤버 변수
        
        double CalcArea() // 멤버 함수
        {
            return 3.14 * radius * radius;
        }

};

int main()
{
    Circle obj;

    obj.radius = 3;
    obj.color = "blue";

    auto area = obj.CalcArea();
    
    cout << "[Cicle]" << endl;
    cout << "Color: " << obj.color << endl;
    cout << "Radius: " << obj.radius << endl;
    cout << "Area: " << area << endl;
    
    return 0;
}



