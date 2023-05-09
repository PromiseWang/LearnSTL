#include "Utils.h"

int main() {
    vector<int> vector1;
    PrintVector(vector1);
    vector1 = {1, 2, 3, 4, 5, 6, 7};
    cout << "vector1的元素如下:" << endl;
    PrintVector(vector1);
    cout << "vector1共有" << vector1.size() << "个元素" << endl;

    // resize(n, [elem])  变长用默认值补充新位置, 变短删除
    vector<int> vector2 = vector1;
    vector2.resize(3);
    cout << "vector2的元素如下:" << endl;
    PrintVector(vector2);

    vector<int> vector3 = vector1;
    vector3.resize(10, 666);
    cout << "vector3的元素如下:" << endl;
    PrintVector(vector3);
    return 0;
}