#include "Utils.h"

int main() {
    // ��ʼ��
    list<int> list1 = {1, 2, 3, 4, 5};
    list<int>::iterator iterator;
    cout << "list1�е�Ԫ������:" << endl;
    PrintList(list1);

    list<int> list2;
    list2.push_back(1);
    list2.push_back(20);
    list2.push_front(3);
    list2.push_front(34);
    cout << "list2�е�Ԫ������:" << endl;
    PrintList(list2);


    // ɾ��Ԫ��
    list1.pop_back();
    list1.pop_front();
    cout << "list1�е�Ԫ������:" << endl;
    PrintList(list1);

    cout << "list1�е�һ������ֵ: " << list1.front() << endl << endl;
    cout << "list1�����һ������ֵ: " << list1.back() << endl << endl;

    list1.front() = 1111;  // ���ĵ�һ��Ԫ�ص�ֵ
    list1.back() = 2222;  // �������һ��Ԫ�ص�ֵ
    cout << "list1�е�Ԫ������:" << endl;
    PrintList(list1);

    // ��ʼ��3��5
    list<int> list3(3, 5);
    cout << "list3�е�Ԫ������:" << endl;
    PrintList(list3);

    // ����ĳ��������ĳһ������
    list<int> list4(list1.begin(), list1.end());
    cout << "list4�е�Ԫ������:" << endl;
    PrintList(list4);

    list<int>::iterator left, right;
    left = list2.begin();
    left++;
    right = list2.end();
    right--;

    list<int> list5(left, right);
    cout << "list5�е�Ԫ������:" << endl;
    PrintList(list5);

    // �������캯��
    list<int> list6(list5);
    cout << "list6�е�Ԫ������:" << endl;
    PrintList(list6);
    return 0;
}