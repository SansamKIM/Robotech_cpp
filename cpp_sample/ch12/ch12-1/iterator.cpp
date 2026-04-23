#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec;    // 벡터 컨테이너 선언

    vec.push_back(0);   // vrc에 원소 추가
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    vector<int>::iterator it = vec.begin();

    cout << *it << endl;    // vec에 저장된 원소 출력
    cout << *(it + 1) << endl;
    cout << *(it + 2) << endl;
    cout << *(it + 3) << endl;
    cout << *(it + 4) << endl;

    return 0;
}