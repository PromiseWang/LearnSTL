#include "Utils.h"

int main() {
    vector<int> vector1 = {1, 2, 3, 4, 5};

    /*
     * iterator与begin(), end()的使用
     * */
    vector<int>::iterator iterator1;
    iterator1 = vector1.begin();

    // 使用while循环遍历
    cout << "while循环的结果:" << endl;
    while (iterator1 != vector1.end()) {
        cout << *iterator1 << "\t";
        iterator1++;
    }
    cout << endl;

    // 使用for循环遍历
    cout << "for循环的结果:" << endl;
    for (iterator1 = vector1.begin(); iterator1 != vector1.end(); iterator1++) {
        cout << *iterator1 << "\t";
    }
    cout << endl;

    /*
     * reverse_iterator与rbegin(), rend()的使用
     * */
    vector<int>::reverse_iterator iterator2;
    cout << "反向迭代器结果:" << endl;
    for (iterator2 = vector1.rbegin(); iterator2 != vector1.rend(); iterator2++) {  // 这里依旧是++
        cout << *iterator2 << "\t";
    }
    cout << endl;

    /*
     * const_iterator与cbegin(), cend()的使用
     * const_reverse_iterator与crbegin, crend()同理
     * */
    vector<int>::const_iterator iterator3;
    iterator3 = vector1.cbegin();
    iterator1 = vector1.begin();
    *iterator1 += 100;  // 可以通过这种方式更改值
    // *iterator3 += 100;  不可以使用  因为是常量

    /*
     * 迭代器失效的情况
     * */
    vector<int> vector2 = {10, 20, 30, 40, 50};
    vector<int>::iterator iterator4;
    iterator4 = vector2.begin() + 2;
    cout << "vector1中索引为2的元素为: " << *iterator4 << endl;
    vector2.insert(iterator4, 2, 88);  // vector1插入两个88
    PrintVector(vector2);
    cout << "当前iterator4的元素为: " << *iterator4 << "\t迭代器失效" << endl;  // 迭代器失效
    iterator4 = vector2.insert(vector2.begin(), 6);
    cout << "vector2元素如下:" << endl;
    PrintVector(vector2);
    cout << "当前iterator4的元素为: "<< *iterator4 << endl;
    return 0;
}