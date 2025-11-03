#include <iostream>

using namespace std;

union Data 
{
    char bytes[4];
    int num;
};

int main()
{
    Data data;

    data.num = 1;
    cout << data.num << endl;
    
    cout << (int) data.bytes[0] << endl;
    cout << (int) data.bytes[1] << endl;
    cout << (int) data.bytes[2] << endl;
    cout << (int) data.bytes[3] << endl;

    return 0;
}
