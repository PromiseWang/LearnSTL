#include "Utils.h"

using namespace std;

int main() {
    vector<int> vector1, vector2, vector3, vector4, vector5;
    int a[] = {1, 2, 3, 4, 5, 6, 7};

    // 1.assign(��ʼ��ַָ��, ������ַ��һλ��ַ) ������ֵ
    vector1.assign(a, a + sizeof(a) / sizeof(int));
    cout << "vector1��Ԫ������:" << endl;
    PrintVector(vector1);

    vector5.assign(vector1.begin(), vector1.end());
    cout << "vector5��Ԫ������:" << endl;
    PrintVector(vector5);

    // 2. assign(Ԫ�ظ���, Ԫ��ֵ) ������ֵ
    vector2.assign(5, 11);
    cout << "vector2��Ԫ������:" << endl;
    PrintVector(vector2);

    // 3. ���ص��ںŸ�ֵ
    vector3 = vector2;
    cout << "vector3��Ԫ������:" << endl;
    PrintVector(vector3);

    // 4. swap() ���������ڵ�ֵ
    vector4 = vector3;
    cout << "vector4��Ԫ������:" << endl;
    PrintVector(vector1);
    vector1.swap( vector4);
    cout << "vector1��Ԫ������:" << endl;
    PrintVector(vector1);


    return 0;
}