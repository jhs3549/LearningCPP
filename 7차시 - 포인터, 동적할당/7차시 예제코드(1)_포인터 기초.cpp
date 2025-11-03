// cpp 포인터 기초
#include <iostream>
using namespace std;

// 클래스 정의
class PointerBasic
{
public:
    int num;
    PointerBasic(int n) { num = n; }
};

int main()
{
    PointerBasic obj(42); // 객체 생성
    PointerBasic* p = &obj; // 객체의 주소를 포인터에 저장

    cout << "객체의 num 값: " << obj.num << endl; // 객체의 멤버 변수 출력
    cout << "포인터를 통한 num 값: " << p->num << endl; // 포인터를 통한 멤버 변수 출력

    cout << "객체의 주소: " << &obj << endl; // 객체의 주소 출력
    cout << "포인터가 가리키는 주소: " << p << endl; // 포인터가 가리키는 주소 출력

    return 0;
}