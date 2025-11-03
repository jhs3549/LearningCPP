#include <iostream>
#include <string>  // 문자열을 다루기 위한 헤더 파일

using namespace std;

struct Vertex3d
{
    float x;
    float y;
    float z;
};
struct Triangle3d
{
    Vertex3d v1;
    Vertex3d v2;
    Vertex3d v3;
};

void printVertex(const Vertex3d& v)
{
    cout << "(" << v.x << ", " << v.y << ", " << v.z << ")" << endl;
}

int main()
{
    Triangle3d triangle = {
        {0.0f, 0.0f, 0.0f}, // v1
        {1.0f, 0.0f, 0.0f}, // v2
        {0.0f, 1.0f, 0.0f}  // v3
    };

    cout << "Triangle vertices:" << endl;
    cout << "v1: "; printVertex(triangle.v1); 
    cout << "v2: "; printVertex(triangle.v2);
    cout << "v3: "; printVertex(triangle.v3);

    return 0;
}