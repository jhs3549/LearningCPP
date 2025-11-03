#include <iostream>

int main() 
{
    int i, sum = 0;
    
    while (i <= 10) 
    {
        sum += i;
        i++;
    }
    std::cout << "합은 : " << sum << std::endl;
    
    return 0;
}
