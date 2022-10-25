/*� ��������� ��������� ������� ���������� ����� ������� WORRY_COUNT. ��� ������ ������� ���������� ����������� �������� � �������.
��� ����� ������ ���������� �� �������. ��� ��������� �������� true � ���� ����� ����������� ������� � ������� ��������� ����������.
������ �����
�� ���� ��������� ������� ���������� �������� Q, ����� � ��������� Q ������� � ���� ��������.
��������� ������ ������������ ��� �� �� ��������, ��� � ����������:
WORRY i � �������� i-�� �������� � ������ ������� (� ��������� � 0) ��� ��������������.
HAPPY i � �������� i-�� �������� (� ��������� � 0) ��� ��������������.
COME k � �������� k ��������� ������� � ����� �������. ���� k ������������, �� ����� ������ k ������� �� ����� �������.
LAST_WORRY � ���������� worry, ���� ��������� � ������� �����������, ���� happy, ���� �� �������.
����� ����������� ����� �������:
WORRY_COUNT � ��������� ���������� ����������� � ������� � ������� ��� � cout.
������ ������
��� ������ �������� LAST_WORRY �������� ���� �����: worry ��� happy.
��� ������ �������� WORRY_COUNT �������� ���� ����� ����� � ���������� ����������� � ������� �� ������ ������.
������ ��������� ������ ������������ ������������� endl.
�����������
������� ������ �� ���� ��������� ������ ���������� ��������, ������� ��������� ������������ ������� ������ �� �����.
������ �����
8
COME 5
WORRY 1
WORRY 4
COME -2
WORRY_COUNT
COME 3
WORRY 5
WORRY_COUNT */
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int q;
    cin >> q;

    vector<bool> queue;

    for (int i = 0; i < q; ++i) {
        string operation_code;
        cin >> operation_code;

        if (operation_code == "WORRY"s) {
            int index;
            cin >> index;

            queue[index] = true;
        }
        else if (operation_code == "HAPPY"s) {
            int index;
            cin >> index;

            queue[index] = false;
        }
        else if (operation_code == "COME"s) {
            int count;
            cin >> count;

            queue.resize(queue.size() + count, false);
        }
        else if (operation_code == "LAST_WORRY"s) {
            if (queue.back()) {
                cout << "worry"s << endl;
            }
            else {
                cout << "happy"s << endl;
            }
        }
        else if (operation_code == "WORRY_COUNT"s) {
            int count = 0;
            for (bool elem : queue) {
                if (elem) {
                    ++count;
                }
            }
            cout << count << endl;
        }
    }
}