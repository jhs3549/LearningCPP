#include <iostream>

using namespace std;

namespace ucla
{
    void print() 
    {
        cout << "University of California, Los Angeles" << endl;
    }
}
namespace mit 
{
    void print() 
    {
        cout << "Massachusetts Institute of Technology" << endl;
    }
}

int main()
{
    ucla::print();
    mit::print();

    return 0;
}