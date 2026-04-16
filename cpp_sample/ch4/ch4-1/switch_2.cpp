// break 제외

#include <iostream>

using namespace std;

int main()
{
    int input_number;

    cout << "1 ~ 5 정수 입력: ";
    cin >> input_number;

    switch (input_number)
    {
    case 1:
        cout << "입력한 수는 1입니다." << endl;
    case 2:
        cout << "입력한 수는 2입니다." << endl;
    case 3:
        cout << "입력한 수는 3입니다." << endl;
    case 4:
        cout << "입력한 수는 4입니다." << endl;
    case 5:
        cout << "입력한 수는 5입니다." << endl;
    default:
        cout << "입력한 수는 1 ~ 5 범위 밖입니다." << endl;
    }

    return 0;
}