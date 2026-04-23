#include <iostream>
#include <string>

using namespace std;

int main()
{
    // 프로그램의 지역 설정
    setlocale(LC_ALL, ".UTF8");

    // 유니코드 문자열 초기화
    wstring korString = L"안녕하세요.";

    // 유니코드 문자열 출력
    wcout << korString << endl;

    return 0;
}
