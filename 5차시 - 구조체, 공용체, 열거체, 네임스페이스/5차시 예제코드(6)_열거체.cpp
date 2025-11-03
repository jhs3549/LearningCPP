// 열거형 (Enumeration) 예제 코드
// game_state enum을 사용하여 게임 상태를 관리하는 예제입니다.
#include <iostream>

using namespace std;

enum GameState // 열거형 선언. 열거체는 관련된 상수들의 집합을 정의하는 데 사용됩니다.
{
    START,   // start = 0. 0,1,2,3,4와 같은 숫자 대신 읽기 쉬운 이름을 붙여 사용합니다.
    PLAYING, // 코드의 가독성이 좋아지고, 실수가 줄어듭니다.
    PAUSED,  // 주로 상태나 옵션을 표현할 때 사용됩니다.
    GAME_OVER,
    VICTORY  // 콤마는 마지막 요소 뒤에도 붙일 수 있습니다. 안 붙여도 무방합니다.
};

int main()
{
    int state = START;

    while (state != GAME_OVER && state != VICTORY)
    {
        cout << "Select game state (0: START, 1: PLAYING, 2: PAUSED, 3: GAME_OVER, 4: VICTORY): ";
        cin >> state;

        switch (state)
        {
            case START:
                cout << "Game is starting..." << endl;
                break;
            case PLAYING:
                cout << "Game is in progress..." << endl;
                break;
            case PAUSED:
                cout << "Game is paused." << endl;
                break;
            case GAME_OVER:
                cout << "Game over!" << endl;
                break;
            case VICTORY:
                cout << "You win!" << endl;
                break;
            default:
                cout << "Invalid state. Please try again." << endl;
                state = START; // Reset to START on invalid input
                break;
        }
    }

    return 0;
}