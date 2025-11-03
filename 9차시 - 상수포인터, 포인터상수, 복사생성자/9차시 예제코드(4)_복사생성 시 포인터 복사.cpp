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
    MyArray clone = buffer;
    clone.data[0] = 2;

    cout << "buffer.data[0]: " << buffer.data[0] << endl; // 예상과 다르게 2가 출력됨
    cout << "clone.data[0]: " << clone.data[0] << endl;

    return 0;
}