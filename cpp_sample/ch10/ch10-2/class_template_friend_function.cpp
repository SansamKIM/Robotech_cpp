#include <iostream>

using namespace std;

template <typename T = int>
class data_package
{
public:
    data_package(T first) : first(first) {}

    friend void printout_friend_element(data_package<T> &data_object)
    {
        cout << "(friend �Լ�) ���ø� �Ű����� �� : "
             << data_object.first << endl;
    }

private:
    T first;
};

int main()
{
    data_package<> template_inst1(5);
    data_package<string> template_inst2("Ŭ���� ���ø� �⺻��");

    printout_friend_element(template_inst1);
    printout_friend_element(template_inst2);
}