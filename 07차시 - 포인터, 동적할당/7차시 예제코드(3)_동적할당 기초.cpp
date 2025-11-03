/* new와 delete의 사용 */
#include <iostream>

int main()
{
    int* p = new int; // int형 변수를 위한 메모리 할당
    *p = 10;          // 할당된 메모리에 값 저장
    
    std::cout << *p << std::endl;
    
    delete p;        // 할당된 메모리 해제
    return 0;
}