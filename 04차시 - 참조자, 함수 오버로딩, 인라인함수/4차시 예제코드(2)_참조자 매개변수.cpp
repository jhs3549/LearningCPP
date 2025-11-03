#include <iostream>

using namespace std;

int max_var(int var_x, int var_y) // 값에 의한 전달: 함수 호출 시 변수의 값이 복사되어 전달됩니다. 따라서 함수 내부에서 매개변수의 값을 변경해도 원래 변수에는 영향을 미치지 않습니다.
{ 
    cout << "var_x의 주소값: " << &var_x << endl;
    cout << "var_y의 주소값: " << &var_y << endl; 

    if (var_x > var_y)
        return var_x;
    else
        return var_y;
}
int max_ref(int &ref_x, int &ref_y) // 참조에 의한 전달: 함수 호출 시 변수의 메모리 주소가 전달됩니다. 따라서 함수 내부에서 매개변수의 값을 변경하면 원래 변수의 값도 변경됩니다.
{ 
    cout << "ref_x의 주소값: " << &ref_x << endl;
    cout << "ref_y의 주소값: " << &ref_y << endl; 

    if (ref_x > ref_y)
        return ref_x;
    else
        return ref_y;
}

int main() 
{
    int a = 5;
    int b = 15;
    cout << "a의 주소값: " << &a << endl;
    cout << "b의 주소값: " << &b << endl;
    cout << "max_var(a, b): " << max_var(a, b) << endl; // 값에 의한 전달로 a와 b의 값이 복사되어 함수에 전달됩니다.
    cout << "max_ref(a, b): " << max_ref(a, b) << endl; // 참조에 의한 전달로 a와 b의 메모리 주소가 함수에 전달됩니다.    

    return 0;
}