/* 동물 프로그램이 인기를 얻었을 때 */
#include <iostream>

typedef struct Animal {
    char name[30];
    int age;

    int health; // 체력
    int food;   // 포만감
    int clean;  // 청결도
} Animal; 

typedef struct Bird {
    char name[30]; 
    int age; 

    int health;
    int food;
    int clean; 

    int height; 
} Bird;

typedef struct Fish {
    char name[30]; 
    int age; 

    int health; 
    int food;
    int clean; 

    int deep; 
} Fish;