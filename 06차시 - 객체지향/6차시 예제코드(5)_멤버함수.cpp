#include <iostream>

using namespace std;

class Time 
{
    private:
        int hour;
        int minute;

    public:
        Time(); // 기본 생성자 선언
        Time(int h, int m); // 두번째 생성자 오버로딩 선언
        
        void Print(); // 멤버 함수 선언

        int getHour() { return hour; }
        int getMinute() { return minute; }

        void setHour(int h);
        void setMinute(int m);
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

void Time::setHour(int h) 
{
    if (h < 0 || h > 23) 
    {
        cout << "Hour must be between 0 and 23." << endl;
        return;
    }
    hour = h;
}
void Time::setMinute(int m) 
{
    if (m < 0 || m > 59) 
    {
        cout << "Minute must be between 0 and 59." << endl;
        return;
    }
    minute = m;
}

int main()
{
    Time t1(12,0);
    t1.Print();

    t1.setHour(25);
    t1.Print();

    t1.setMinute(30);
    t1.Print();

    return 0;
}