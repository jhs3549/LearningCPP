#include <iostream>
using namespace std;

class Dummy 
{
    private:
        int num;
    public:
        Dummy(int n): num(n) { }
        ~Dummy()
        {
            cout << "Destructor " << num << " is called." << endl;
        }
};
int main()
{
    Dummy* arr = new Dummy[5] {1, 2, 3, 4, 5};
    delete arr; // 이 경우에는 첫 번째 객체만 파괴됨. 나머지 객체들은 메모리 누수 발생.
    arr = nullptr;

    return 0;
}