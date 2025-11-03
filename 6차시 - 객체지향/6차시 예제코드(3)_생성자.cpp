#include <iostream>

using namespace std;

class Time 
{
    public:
        int hour;
        int minute;

        Time(int h, int m); // 생성자 선언
        
        void Print(); // 멤버 함수 선언
};

Time::Time(int h, int m) // 생성자 정의
{
    hour = h;
    minute = m;
}
void Time::Print() // 멤버 함수 정의
{
    cout << hour << ":" << minute << endl;
}

int main()
{
    Time t1(10, 25); // C++98
    Time t2 { 10, 25 }; // C++11
    Time t3 = { 10, 25 }; // C++11
    
    t1.Print();
    t2.Print();
    t3.Print();

    return 0;
}