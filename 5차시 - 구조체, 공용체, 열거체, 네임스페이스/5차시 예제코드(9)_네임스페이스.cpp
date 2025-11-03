#include <iostream>

using namespace std;

namespace GameStates
{
    enum GameState // 열거형 선언. 열거체는 관련된 상수들의 집합을 정의하는 데 사용됩니다.
    {
        START,   // start = 0. 0,1,2,3,4와 같은 숫자 대신 읽기 쉬운 이름을 붙여 사용합니다.
        PLAYING, // 코드의 가독성이 좋아지고, 실수가 줄어듭니다.
        PAUSED,  // 주로 상태나 옵션을 표현할 때 사용됩니다.
        GAME_OVER,
        VICTORY  // 콤마는 마지막 요소 뒤에도 붙일 수 있습니다. 안 붙여도 무방합니다.
    };
}

void handleGameState(GameStates::GameState state)
{
    switch (state)
    {
        case GameStates::START:
            cout << "Game is starting..." << endl;
            break;
        case GameStates::PLAYING:
            cout << "Game is in progress..." << endl;
            break;
        case GameStates::PAUSED:
            cout << "Game is paused." << endl;
            break;
        case GameStates::GAME_OVER:
            cout << "Game over!" << endl;
            break;
        case GameStates::VICTORY:
            cout << "You win!" << endl;
            break;
        default:
            cout << "Invalid state." << endl;
            break;
    }
}

int main()
{
    using namespace GameStates;

    GameState state = START;

    while (state != GAME_OVER && state != VICTORY)
    {
        cout << "Select game state (0: START, 1: PLAYING, 2: PAUSED, 3: GAME_OVER, 4: VICTORY): ";
        int input;
        cin >> input;

        if (input < START || input > VICTORY)
        {
            cout << "Invalid state. Please try again." << endl;
            continue; // Invalid input, prompt again
        }

        state = static_cast<GameState>(input); // static_cast는 안전한 형 변환을 위해 사용. () 안에 입력한 값을 <> 안에 지정한 타입으로 변환.
        handleGameState(state);
    }

    return 0;
}