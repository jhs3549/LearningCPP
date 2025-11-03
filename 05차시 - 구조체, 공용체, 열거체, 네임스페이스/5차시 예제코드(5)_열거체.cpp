#include <iostream>

using namespace std;

enum Color // 열거형 선언. 열거체는 관련된 상수들의 집합을 정의하는 데 사용됩니다.
{
    RED,
    GREEN,
    BLUE, 
    BLACK,
    WHITE  // 콤마는 마지막 요소 뒤에도 붙일 수 있습니다. 안 붙여도 무방합니다.
};

int main()
{
    Color myColor = GREEN;

    if (myColor == GREEN)
    {
        cout << "The color is green." << endl;
    }
    else
    {
        cout << "The color is not green." << endl;
    }

    myColor = BLUE;
    cout << "The color value is: " << myColor << endl; // 열거형 값은 내부적으로 정수로 표현됩니다.

    return 0;
}