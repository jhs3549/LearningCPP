#include <iostream>
#include <string>  // 문자열 사용을 위한 헤더

using namespace std;

namespace Google
{
    string name = "Google";   // 조직 이름

    namespace department   // 큰 범주부터 작은 범주로 네임스페이스 중첩 (계층 구조 형성)
    {
        string name = "Research Department";   // 부서 이름 (이름이 겹치지 않도록 네임스페이스 사용)

        namespace team
        {
            string name = "AI Safety Team";    // 팀 이름
        }
    }

    void printInfo()
    {
        cout << "Company: " << Google::name << endl;
        cout << "Department: " << Google::department::name << endl;   // 중첩된 네임스페이스 접근. 코드 가독성 향상. 
        cout << "Team: " << Google::department::team::name << endl;   // 같은 name이라도 소속이 달라 구분 가능
    }
}

int main()
{
    Google::printInfo();  // 조직-부서-팀 구조 출력

    return 0;
}
