#include <iostream>
#include <cstdlib>

using namespace std;

// 종료 처리 함수
void myterminate()
{
    cout << "myterminate called" << endl;
    exit(-1);
}

int main()
{
    set_terminate(myterminate);
    throw 1;

    return 0;
}