#include <iostream>

using namespace std;

class Time 
{
    public:
        int hour;
        int minute;

        Time(); // 기본 생성자 선언
        Time(int h, int m); // 두번째 생성자 오버로딩 선언
        
        void Print(); // 멤버 함수 선언
};

Time::Time() // 기본 생성자 정의
{
    hour = 0;
    minute = 0;
}
Time::Time(int h, int m) // 두번째 생성자 정의
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
    Time t1; // 기본 생성자 호출
    Time t2(10, 25); // 두번째 생성자 호출
    
    t1.Print();
    t2.Print();

    return 0;
}