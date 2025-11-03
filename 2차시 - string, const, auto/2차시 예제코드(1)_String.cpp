#include <iostream>
#include <string>  // 문자열을 다루기 위한 헤더 파일

using namespace std;

int main()
{
    string str1 = "Hello";  // 문자열 리터럴로 초기화
    string str2 = "World";

    // 문자열 연결
    string str3 = str1 + " " + str2;
    cout << "Concatenated String: " << str3 << endl;

    // 문자열 길이
    cout << "Length of str3: " << str3.length() << endl;

    // 부분 문자열 추출
    string subStr = str3.substr(0, 5);  // "Hello"
    cout << "Substring: " << subStr << endl;

    // 문자열 비교
    if (str1 == "Hello") 
    {
        cout << "str1 is equal to 'Hello'" << endl;
    }

    return 0;
}