#include <iostream>
#include <string>

using namespace std;

int main() 
{
    const string s1 = "Hello CAU!";
    cout << s1 << endl;
    //s1.replace(6, 3, "MAN"); // const이므로 컴파일 에러
    cout << s1 << endl;
    
    return 0;
}