#include <iostream>
#include <string>

using namespace std;

int main()
{
    // 문자열 생성
    string text = "The C++ Programming language is one of the hardest languages.";

    // 찾을 문자열과 교체할 문자열 정의
    string target = "bye";
    string replacement = "most powerful";

    // 처음 등장하는 위치 찾기
    size_t pos = text.find(target);

    //문자열 교체
    if (pos != string::npos) {
        text.replace(pos, target.length(), replacement);
        cout << "교체 후 문장: " << text << endl;
    }
    else {
        cout << target << " 을 찾을 수 없음" << endl;
    }

    return 0;
}