#include <iostream>
using namespace std;
int main()
{   setlocale(LC_ALL, "ru")
    int num;
    int sum = 0;
    cout << "������ ���� ����� ��� ����������� ���� �����: ";
    cin >> num;
    while (num != 0)
    {
        sum += num % 10; 
        num /= 10; 
    }
    cout << "����: " << sum << endl;
    return 0;
}
