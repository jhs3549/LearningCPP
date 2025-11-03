#include <iostream>
#include <string>  // 문자열을 다루기 위한 헤더 파일

using namespace std;

int main()
{
    string str1 = "Good";
    string str2 = "Bad";
    bool bCompare1 = (str1 < str2);  // 사전식 비교
    bool bCompare2 = (str1 > str2);
    bool bCompare3 = (str1 == str2);
    bool bCompare4 = (str1 != str2);
    bool bCompare5 = (str1 == "Good");

    cout << boolalpha;  // bool 값을 true/false로 출력
    cout << "str1 < str2: " << bCompare1 << endl;
    cout << "str1 > str2: " << bCompare2 << endl;
    cout << "str1 == str2: " << bCompare3 << endl;
    cout << "str1 != str2: " << bCompare4 << endl;
    cout << "str1 == 'Good': " << bCompare5 << endl;

    return 0;
}