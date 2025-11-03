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
    delete [] arr; // 파괴될 때는 역순으로 파괴됨
    arr = nullptr;

    return 0;
}