#include <iostream>

using namespace std;

int main()
{
    int a = 7;
    int b = 5;
    int result;

    result = a > b ? b : a;

    cout << "result = " << result << endl;

    return 0;
}