#include <iostream>
#include <string>

using namespace std;

int main()
{
    int customer_num = 0;

    cout << "오늘 방문 손님: ";
    cin >> customer_num;

    string *bread = new string[customer_num];   // 손님 수만큼 string 배열 생성

    for (int i = 0; i < customer_num; i++)  // 입력받은 손님 수만큼 반복
    {
        bread[i] = "빵_" + to_string(i);    // '빵_숫자' 형태로 배열에 저장
    }

    cout << endl << "--생산된 빵--" << endl;
    for (int i = 0; i < customer_num; i++)
    {
        cout << *(bread + i) << endl;   // 생산된 빵 출력
    }

    delete[] bread;

    return 0;
}