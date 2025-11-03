#include <iostream>
#include <string>  // 문자열을 다루기 위한 헤더 파일

using namespace std;

int main()
{
    string greeting = "Hello!";

    cout << greeting[0] << endl;  // 'H'
    cout << greeting[1] << endl;  // 'e'
    cout << greeting[2] << endl;  // 'l'
    cout << greeting[3] << endl;  // 'l'
    cout << greeting[4] << endl;  // 'o'
    cout << greeting[5] << endl;  // '!'

    return 0;
}