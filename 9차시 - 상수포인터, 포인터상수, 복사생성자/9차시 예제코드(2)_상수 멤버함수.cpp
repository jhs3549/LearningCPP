#include <iostream>
using namespace std;

class Time
{
    private:
        int hour;
        int minute;
        int second;
    public:
        Time(int h, int m, int s): hour(h), minute(m), second(s) { }
        void showTime() const
        {
            cout << hour << " : " << minute << " : " << second << endl;
            // hour = 10; // Error! const 멤버 함수에서는 멤버 변수 변경 불가
            // setHour(10); // Error! const 멤버 함수에서는 non-cost 멤버 함수 호출 불가
        }
        void setHour(int h) { hour = h; }
        void setMinute(int m) { minute = m; }
        void setSecond(int s) { second = s; }
};