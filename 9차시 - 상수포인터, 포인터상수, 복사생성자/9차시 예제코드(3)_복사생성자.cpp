#include <iostream>
#include <string>
using namespace std;

class MyClass
{
    public:
        string name;
        
        MyClass()
        {
            cout << "Default Constructor is called." << endl;
            cout << name << endl;
        }
        MyClass(const string& str)
        {
            name = str;
            cout << "Parameterized Constructor is called." << endl;
            cout << name << endl;
        }
        MyClass(const MyClass& other) // 복사 생성자
        {
            name = other.name;
            cout << "Copy Constructor is called." << endl;
            cout << name << endl;
        }
};

void funcByValue(MyClass obj) // 값으로 전달
{
    cout << "Function funcByValue is called." << endl;
    cout << obj.name << endl;
}
void funcByReference(MyClass& obj) // 참조자로 전달
{
    cout << "Function funcByReference is called." << endl;
    cout << obj.name << endl;
}
MyClass funcReturnByValue(MyClass& obj) // 값으로 반환
{
    cout << "Function funcReturnByValue is called." << endl;
    cout << obj.name << endl;
    return obj; // 복사 생성자 호출
}
MyClass& funcReturnByReference(MyClass& obj) // 참조자로 반환
{
    cout << "Function funcReturnByReference is called." << endl;
    cout << obj.name << endl;
    return obj; // 복사 생성자 호출 안 함
}

int main()
{
    MyClass obj1; // 기본 생성자 호출
    obj1.name = "Object #1";    
    MyClass obj2("Object #2"); // 매개변수가 있는 생성자 호출
    MyClass obj3 = obj2; // 복사 생성자 호출
    MyClass obj4(obj3); // 복사 생성자 호출
    MyClass obj5 = MyClass("Temporary Object"); // 임시 객체 생성 후 복사 생성자 호출
    cout << "------------------------" << endl;
    funcByValue(obj1); // 값으로 전달, 복사 생성자 호출
    cout << "------------------------" << endl;
    funcByReference(obj2); // 참조자로 전달, 복사 생성자 호출 안 함
    cout << "------------------------" << endl;
    MyClass obj6 = funcReturnByValue(obj3); // 값으로 반환, 복사 생성자 호출
    cout << "------------------------" << endl;
    MyClass& obj7 = funcReturnByReference(obj4); // 참조자로 반환, 복사 생성자 호출 안 함
    cout << "------------------------" << endl;
    cout << obj6.name << endl;
    cout << obj7.name << endl;

    return 0;
}