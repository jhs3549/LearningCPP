// C++ 고유의 범위 기반 반복문
#include <iostream>

using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    // 범위 기반 for문을 사용하여 배열의 모든 요소 출력
    for (int value : arr)  // arr 배열의 각 요소를 value에 복사
    {
        cout << value << " ";  // 각 요소 출력
    }
    cout << endl;

    // 범위 기반 for문에서 참조자를 사용하여 배열 요소를 직접 수정
    for (int& value : arr)  // arr 배열의 각 요소를 value에 대한 참조로 바인딩
    {
        value += 5;  // 각 요소에 5를 더함
    }

    // 수정된 배열 출력
    for (int value : arr)
    {
        cout << value << " ";  // 각 요소 출력
    }
    cout << endl;

    return 0;
}