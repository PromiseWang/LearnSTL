#include "Utils.h"

int main() {

    vector<int> vector1 = {1, 2, 3, 4, 5, 6, 7};

    // 1. push_back(elem)����ĩβ
    vector1.push_back(666);
    cout << "vector1Ԫ����������:" << endl;
    PrintVector(vector1);

    // 2. pop_back() ɾ��ĩβ
    vector1.pop_back();
    cout << "vector1Ԫ����������:" << endl;
    PrintVector(vector1);

    // 3. insert(*pos, elem) posָ��λ�ò���Ԫ��   insert()�����ķ���ֵ����ŵ���6����
    // 3�����99
    vector1.insert(vector1.begin() + 3, 99);
    cout << "vector1Ԫ����������:" << endl;
    PrintVector(vector1);

    // 4. insert(*pos, n, elem) posָ��λ�ò���n��Ԫ��
    // 1�����3��88
    vector1.insert(vector1.begin() + 1, 3, 88);
    cout << "vector1Ԫ����������:" << endl;
    PrintVector(vector1);


    // 5. insert(*pos, *begin, *end)
    vector<int> vector2 = {-1, -2, -3};
    // 3��88 �����vector2
    vector1.insert(vector1.begin() + 4, vector2.begin(), vector2.end());
    cout << "vector1Ԫ����������:" << endl;
    PrintVector(vector1);

    // vector2�����3��88
    vector2.insert(vector2.begin() + 3, vector1.begin() + 1, vector1.begin() + 4);
    cout << "vector2Ԫ����������:" << endl;
    PrintVector(vector2);


    // 6. erase()
    vector1.erase(vector1.begin() + 9);  // ɾ��99
    cout << "vector1Ԫ����������:" << endl;
    PrintVector(vector1);

    vector1.erase(vector1.begin() + 1, vector1.begin() + 4);  // ɾ������88
    cout << "vector1Ԫ����������:" << endl;
    PrintVector(vector1);


    return 0;
}