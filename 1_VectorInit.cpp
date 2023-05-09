#include "Utils.h"

using namespace std;

int main() {
    // 1. 构造函数(元素个数, 元素值)
    vector<int> vector1(2, 5);
    cout << "构造函数(元素个数, 元素值)的输出:" << endl;
    PrintVector(vector1);

    // 2. 构造函数(起始地址指针, 结束地址后一位指针)
    int a[5] = {1, 2, 3, 4, 5};
    vector<int> vector2(a, a + 5);
    cout << "构造函数(起始地址指针, 结束地址后一位指针)的输出:" << endl;
    PrintVector(vector2);

    // 3. 拷贝构造函数
    vector<int> vector3(vector1);  // vector3拷贝vector1的内容
    cout << "拷贝构造函数的输出:" << endl;
    PrintVector(vector3);

    // 验证拷贝后是否会更改原来的值------不会
    vector3[1] = 2;
    cout << endl << "vector1的内容如下:" << endl;
    PrintVector(vector1);
    cout << "vector3的内容如下:" << endl;
    PrintVector(vector3);

    vector<int> vector4 = vector2;
    vector4[2] = 666;
    cout << "vector4的内容如下" << endl;
    PrintVector(vector4);
    cout << "vector2的内容如下" << endl;
    PrintVector(vector2);

    return 0;
}
