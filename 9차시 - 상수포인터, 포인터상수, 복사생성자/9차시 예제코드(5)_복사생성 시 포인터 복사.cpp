#include <iostream>
using namespace std;

class MyArray
{
    public:
        int size;
        int* data;
        MyArray()
        {
            size = 0;
            data = nullptr;
        }
        MyArray(int sz)
        {
            size = sz;
            data = new int[sz];
        }
        ~MyArray()
        {
            if (data)
                delete[] data;
        }
};

int main()
{
    MyArray buffer(10);
    buffer.data[0] = 1;
    cout << buffer.data << endl;
    cout << buffer.data[0] << endl;

    MyArray* clone = new MyArray(buffer);
    cout << clone->data << endl;
    cout << clone->data[0] << endl;
    delete clone;

    buffer.data[0] = 2; // dangling pointer 문제 발생 (clone이 해제되면서 buffer.data도 영향을 받음)
    cout << buffer.data[0] << endl;

    return 0;
}