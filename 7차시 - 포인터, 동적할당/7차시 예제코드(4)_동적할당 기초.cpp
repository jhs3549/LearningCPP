#include <iostream>
using namespace std;

int main()
{
    int* pVar = new int; // int형 변수를 위한 메모리 할당
    int* pArray = new int[5]; // int형 배열을 위한 메모리 할당
    int* pArray2 = new int[3]{10, 20, 30}; // int형 배열을 위한 메모리 할당 및 초기화
    
    *pVar = 42; // 할당된 메모리에 값 저장
    pArray[0] = 1; // 배열의 첫 번째 요소에 값 저장

    cout << "pVar: " << *pVar << endl;
    cout << "pArray[0]: " << pArray[0] << endl;
    cout << "pArray2[1]: " << pArray2[1] << endl;

    delete pVar; // 할당된 메모리 해제
    delete[] pArray; // 배열 메모리 해제
    delete[] pArray2; // 배열 메모리 해제
    pVar = nullptr; // 포인터를 nullptr로 설정
    pArray = nullptr; // 포인터를 nullptr로 설정
    pArray2 = nullptr; // 포인터를 nullptr로 설정
    
    return 0;
}