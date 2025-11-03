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

    data.bytes[0] = 1;
    data.bytes[1] = 1;
    data.bytes[2] = 1;
    data.bytes[3] = 1;

    cout << "data.num: " << data.num << endl;

    return 0;
}