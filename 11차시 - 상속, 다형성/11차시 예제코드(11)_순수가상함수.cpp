#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

class Character
{
public:
    virtual void Attack() = 0; // 순수가상함수
    virtual ~Character() {} // 가상 소멸자
};
class Warrior : public Character
{
public:
    void Attack() override
    {
        cout << "[Warrior] Swing Sword!" << endl;
    }
};
class Mage : public Character
{  
public:
    void Attack() override
    {
        cout << "[Mage] Cast Spell!" << endl;
    }
};
class Archer : public Character
{
public:
    void Attack() override
    {
        cout << "[Archer] Shoot Arrow!" << endl;
    }
};

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    vector<Character*> characters;
    for (int i = 0; i < 10; ++i)
    {
        int randNum = rand() % 3;
        if (randNum == 0)
            characters.push_back(new Warrior());
        else if (randNum == 1)
            characters.push_back(new Mage());
        else
            characters.push_back(new Archer());
    }

    for (Character* character : characters)
    {
        character->Attack();
    }

    for (Character* character : characters)
    {
        delete character;
    }

    return 0;
}