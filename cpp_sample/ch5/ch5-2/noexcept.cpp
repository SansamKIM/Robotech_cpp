#include <iostream>

using namespace std;

void real_noexcept() noexcept
{
    cout << "real_noexcept" << endl;
}

// noexecept로 명시된 함수 안에서 예외 발생
void fake_noexcept() noexcept
{
    cout << "fake_noexcept" << endl;
    throw 1;    // 정수 형식 예외 발생
}

int main()
{
    real_noexcept();

    try
    {
        fake_noexcept();
    }
    catch(int exec)
    {
        cout << "catch " << exec << endl;
    }
    
}