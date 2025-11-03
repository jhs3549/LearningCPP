#include <iostream>

int main() 
{
    int lucky_number = 3;
    std::cout << "숫자를 입력해주세요" << std::endl;
    int user_input; 
    
    while (1) 
    {
        std::cout << "입력 : ";
        std::cin >> user_input;
        
        if (lucky_number == user_input) 
        {
            std::cout << "정답입니다" << std::endl;
            break;
        }
        else 
        {
            std::cout << "틀렸습니다" << std::endl;
        }
        
    } 
    
    return 0;
}