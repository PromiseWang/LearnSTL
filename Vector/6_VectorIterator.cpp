#include "Utils.h"

int main() {
    vector<int> vector1 = {1, 2, 3, 4, 5};

    /*
     * iterator��begin(), end()��ʹ��
     * */
    vector<int>::iterator iterator1;
    iterator1 = vector1.begin();

    // ʹ��whileѭ������
    cout << "whileѭ���Ľ��:" << endl;
    while (iterator1 != vector1.end()) {
        cout << *iterator1 << "\t";
        iterator1++;
    }
    cout << endl;

    // ʹ��forѭ������
    cout << "forѭ���Ľ��:" << endl;
    for (iterator1 = vector1.begin(); iterator1 != vector1.end(); iterator1++) {
        cout << *iterator1 << "\t";
    }
    cout << endl;

    /*
     * reverse_iterator��rbegin(), rend()��ʹ��
     * */
    vector<int>::reverse_iterator iterator2;
    cout << "������������:" << endl;
    for (iterator2 = vector1.rbegin(); iterator2 != vector1.rend(); iterator2++) {  // ����������++
        cout << *iterator2 << "\t";
    }
    cout << endl;

    /*
     * const_iterator��cbegin(), cend()��ʹ��
     * const_reverse_iterator��crbegin, crend()ͬ��
     * */
    vector<int>::const_iterator iterator3;
    iterator3 = vector1.cbegin();
    iterator1 = vector1.begin();
    *iterator1 += 100;  // ����ͨ�����ַ�ʽ����ֵ
    // *iterator3 += 100;  ������ʹ��  ��Ϊ�ǳ���

    /*
     * ������ʧЧ�����
     * */
    vector<int> vector2 = {10, 20, 30, 40, 50};
    vector<int>::iterator iterator4;
    iterator4 = vector2.begin() + 2;
    cout << "vector1������Ϊ2��Ԫ��Ϊ: " << *iterator4 << endl;
    vector2.insert(iterator4, 2, 88);  // vector1��������88
    PrintVector(vector2);
    cout << "��ǰiterator4��Ԫ��Ϊ: " << *iterator4 << "\t������ʧЧ" << endl;  // ������ʧЧ
    iterator4 = vector2.insert(vector2.begin(), 6);
    cout << "vector2Ԫ������:" << endl;
    PrintVector(vector2);
    cout << "��ǰiterator4��Ԫ��Ϊ: "<< *iterator4 << endl;
    return 0;
}