#include "header1.h"
#include "header2.h"
#include <iostream>

int main()
{
    std::cout << "Header1 a: " << header1::a << ", b: " << header1::b << std::endl;
    std::cout << "Header2 a: " << header2::a << ", b: " << header2::b << std::endl;
    std::cout << "func1() result: " << header1::func1() << std::endl;
    std::cout << "func2() result: " << header2::func2() << std::endl;
    return 0;
}