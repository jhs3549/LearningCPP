#include <iostream>

int main()
{
    int arr_size;
    std::cout << "배열의 크기 입력: ";
    std::cin >> arr_size;
    int *list = new int[arr_size]; // 배열 크기만큼 메모리 할당

    for (int i = 0; i < arr_size; i++)
    {
        std::cin >> list[i]; // 배열에 값 입력
    }
    for (int i = 0; i < arr_size; i++)
    {
        std::cout << i << "th element of list : " << list[i] << std::endl; // 배열 값 출력
    }
    
    delete[] list; // 배열 메모리 해제
    return 0;
}