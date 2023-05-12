#include "Utils.h"

using namespace std;

int main() {
    vector<int> vector1, vector2, vector3, vector4, vector5;
    int a[] = {1, 2, 3, 4, 5, 6, 7};

    // 1.assign(起始地址指针, 结束地址后一位地址) 拷贝赋值
    vector1.assign(a, a + sizeof(a) / sizeof(int));
    cout << "vector1的元素如下:" << endl;
    PrintVector(vector1);

    vector5.assign(vector1.begin(), vector1.end());
    cout << "vector5的元素如下:" << endl;
    PrintVector(vector5);

    // 2. assign(元素个数, 元素值) 拷贝赋值
    vector2.assign(5, 11);
    cout << "vector2的元素如下:" << endl;
    PrintVector(vector2);

    // 3. 重载等于号赋值
    vector3 = vector2;
    cout << "vector3的元素如下:" << endl;
    PrintVector(vector3);

    // 4. swap() 交换容器内的值
    vector4 = vector3;
    cout << "vector4的元素如下:" << endl;
    PrintVector(vector1);
    vector1.swap( vector4);
    cout << "vector1的元素如下:" << endl;
    PrintVector(vector1);


    return 0;
}