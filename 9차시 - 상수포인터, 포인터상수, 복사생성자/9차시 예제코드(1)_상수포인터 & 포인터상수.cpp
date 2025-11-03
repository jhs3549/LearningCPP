#include <iostream>
using namespace std;

int main()
{
    const int a = 3;
    int b = 5;
    const int c = 7;
    int d = 9;

    const int * p1 = &a; // p1은 상수를 가리키는 일반 포인터
    p1 = &c; // p1이 가리키는 대상 변경 가능
    // *p1 = 10; // Error! // p1이 가리키는 대상의 값 변경 불가

    int * const p2 = &b; // p2는 일반 변수를 가리키는 상수 포인터
    // p2 = &d; // Error! // p2가 가리키는 대상 변경 불가
    *p2 = 10; // p2가 가리키는 대상의 값 변경 가능

    const int * const p3 = &a; // p3은 상수를 가리키는 상수 포인터
    // p3 = &c; // Error! // p3이 가리키는 대상 변경 불가
    // *p3 = 10; // Error! // p3이 가리키는 대상의 값 변경 불가
    
    return 0;
}