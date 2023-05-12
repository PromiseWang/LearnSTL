#include "Utils.h"

int main() {

    vector<int> vector1 = {1, 2, 3, 4, 5, 6, 7};

    // 1. push_back(elem)插入末尾
    vector1.push_back(666);
    cout << "vector1元素内容如下:" << endl;
    PrintVector(vector1);

    // 2. pop_back() 删除末尾
    vector1.pop_back();
    cout << "vector1元素内容如下:" << endl;
    PrintVector(vector1);

    // 3. insert(*pos, elem) pos指针位置插入元素   insert()函数的返回值将会放到第6部分
    // 3后插入99
    vector1.insert(vector1.begin() + 3, 99);
    cout << "vector1元素内容如下:" << endl;
    PrintVector(vector1);

    // 4. insert(*pos, n, elem) pos指针位置插入n个元素
    // 1后插入3个88
    vector1.insert(vector1.begin() + 1, 3, 88);
    cout << "vector1元素内容如下:" << endl;
    PrintVector(vector1);


    // 5. insert(*pos, *begin, *end)
    vector<int> vector2 = {-1, -2, -3};
    // 3个88 后插入vector2
    vector1.insert(vector1.begin() + 4, vector2.begin(), vector2.end());
    cout << "vector1元素内容如下:" << endl;
    PrintVector(vector1);

    // vector2后插入3个88
    vector2.insert(vector2.begin() + 3, vector1.begin() + 1, vector1.begin() + 4);
    cout << "vector2元素内容如下:" << endl;
    PrintVector(vector2);


    // 6. erase()
    vector1.erase(vector1.begin() + 9);  // 删除99
    cout << "vector1元素内容如下:" << endl;
    PrintVector(vector1);

    vector1.erase(vector1.begin() + 1, vector1.begin() + 4);  // 删除三个88
    cout << "vector1元素内容如下:" << endl;
    PrintVector(vector1);


    return 0;
}