#include <iostream>

class Animal {
    private: // private는 외부에서 접근하지 못하게 막음
        int food;   // 포만감
        int weight; // 몸무게

    public: // public은 외부에서 접근 가능
        void set_animal(int f, int w) {
            food = f;
            weight = w;
        }
        void increase_food(int f) {
            food += f;
            weight += f / 3;
        }
        void show_status() {
            std::cout << "food: " << food << std::endl;
            std::cout << "weight: " << weight << std::endl;
        }
};

int main()
{
    Animal animal;

    animal.set_animal(100, 50);
    animal.increase_food(30);
    animal.show_status();

    return 0;
}