#include <iostream>

using namespace std;

int add(int _x, int _y)    // 함수 정의
{
    int result = _x + _y;
    return result;
}

int main()
{
    int add_result = add(2, 3);    // 함수 호출
    cout << "add 함수 결과: " << add_result << endl;    // 함수 실행 결과

    return 0;
}