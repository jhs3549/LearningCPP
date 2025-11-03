/* 구조체 동적할당 예시 */
#include <iostream>

typedef struct Animal {
    char name[30];
    int age;

    int health; // 체력
    int food;   // 포만감
    int clean;  // 청결도
} Animal; // typedef를 사용하여 구조체 이름을 Animal로 정의

void create_animal(Animal *animal) // 'struct' 생략 가능(typedef 덕분에)
{
    std::cout << "동물의 이름: ";
    std::cin >> animal->name;
    std::cout << "동물의 나이: ";
    std::cin >> animal->age;

    animal->health = 100; // '->'는 포인터가 가리키는 구조체 멤버에 접근할 때 사용
    animal->food = 100;
    animal->clean = 100;
}

void play(Animal *animal)
{
    animal->health += 10;
    animal->food -= 20;
    animal->clean -= 30;
}

void one_day_pass(Animal *animal)
{
    animal->health -= 10;
    animal->food -= 30;
    animal->clean -= 20;
}

void show_status(Animal *animal)
{
    std::cout << "이름: " << animal->name << std::endl;
    std::cout << "나이: " << animal->age << std::endl;
    std::cout << "체력: " << animal->health << std::endl;
    std::cout << "포만감: " << animal->food << std::endl;
    std::cout << "청결도: " << animal->clean << std::endl;
}

int main()
{
    Animal *animal_list[10];
    int animal_count = 0;

    for (;;)
    {
        std::cout << "1. 동물 생성" << std::endl;
        std::cout << "2. 놀기" << std::endl;
        std::cout << "3. 상태 보기" << std::endl;
        std::cout << "메뉴 선택: ";

        int menu;
        std::cin >> menu;

        switch (menu) 
        {
            int play_with;
            case 1:
                animal_list[animal_count] = new Animal; // 동물 구조체를 위한 메모리 할당
                create_animal(animal_list[animal_count]);
                animal_count++;
                break;
            case 2:
                std::cout << "몇 번째 동물과 놀까요? ";
                std::cin >> play_with;
                if (play_with < animal_count)
                {
                    play(animal_list[play_with]);
                }
                else
                {
                    std::cout << "잘못된 입력입니다." << std::endl;
                }
                break;
            case 3:
                std::cout << "몇 번째 동물의 상태를 볼까요? ";
                std::cin >> play_with;
                if (play_with < animal_count)
                {
                    show_status(animal_list[play_with]);
                }
                else
                {
                    std::cout << "잘못된 입력입니다." << std::endl;
                }
                break;
        }
        for (int i = 0; i < animal_count; i++)
        {
            one_day_pass(animal_list[i]);
        }
    }

    for (int i = 0; i < animal_count; i++)
    {
        delete animal_list[i]; // 동물 구조체 메모리 해제
    }

    return 0;
}