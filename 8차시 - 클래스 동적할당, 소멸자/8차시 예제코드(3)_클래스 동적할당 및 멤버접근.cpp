#include <iostream>
using namespace std;

class Dog
{
    private:
        int* pWeight;
        int* pAge;
    public:
        Dog()
        {
            pWeight = new int {1};
            pAge = new int {10};
        }
        ~Dog()
        {
            delete pWeight;
            delete pAge;
            cout << "Destructor is called." << endl;
        }
        int getWeight() const { return *pWeight; }
        int getAge() const { return *pAge; }
        void setWeight(int w) { *pWeight = w; }
        void setAge(int a) { *pAge = a; }
};

int main()
{
    Dog* pDog = new Dog;
    cout << "Weight: " << pDog->getWeight() << endl;
    cout << "Age: " << pDog->getAge() << endl;

    pDog->setWeight(5);
    pDog->setAge(20);

    cout << "Weight: " << pDog->getWeight() << endl;
    cout << "Age: " << pDog->getAge() << endl;

    delete pDog;
    pDog = nullptr;

    return 0;
}