#include "Utils.h"

int main() {
    list<int> list1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int>::iterator iterator1;

    // 顺序遍历
    cout << "list1内容元素如下:" << endl;
    for (iterator1 = list1.begin(); iterator1 != list1.end(); iterator1++) {
        cout << *iterator1 << "\t";
    }
    cout << endl;

    // 逆序遍历
    list<int>::reverse_iterator iterator2;
    cout << "list2内容元素逆序如下:" << endl;
    for (iterator2 = list1.rbegin(); iterator2 != list1.rend(); iterator2++) {
        cout << *iterator2 << "\t";
    }
    cout << endl;
    return 0;
}