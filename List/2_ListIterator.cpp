#include "Utils.h"

int main() {
    list<int> list1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int>::iterator iterator1;

    // ˳�����
    cout << "list1����Ԫ������:" << endl;
    for (iterator1 = list1.begin(); iterator1 != list1.end(); iterator1++) {
        cout << *iterator1 << "\t";
    }
    cout << endl;

    // �������
    list<int>::reverse_iterator iterator2;
    cout << "list2����Ԫ����������:" << endl;
    for (iterator2 = list1.rbegin(); iterator2 != list1.rend(); iterator2++) {
        cout << *iterator2 << "\t";
    }
    cout << endl;
    return 0;
}