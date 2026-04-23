#include <iostream>

using namespace std;

template <typename T = int>
class data_package
{
public:
    data_package(T first) : first(first) {}
    template <typename C>
    friend void printout_friend_element(C &data_object); // ������ �Լ� ����
private:
    T first;
};

template <typename C>
void printout_friend_element(C &data_object)
{ // ������ �Լ� ����
    cout << "(friend �Լ� ���ø� ȣ��)  ���ø� ���� �Ű� ���� �� : "
         << data_object.first << endl;
}

int main()
{
    data_package<> template_inst1(5);
    data_package<string> template_inst2("Ŭ���� ���ø� �⺻��");

    printout_friend_element(template_inst1);
    printout_friend_element(template_inst2);
}