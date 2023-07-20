#include "Utils.h"

int main() {
    // 初始化
    list<int> list1 = {1, 2, 3, 4, 5};
    list<int>::iterator iterator;
    cout << "list1中的元素如下:" << endl;
    PrintList(list1);

    list<int> list2;
    list2.push_back(1);
    list2.push_back(20);
    list2.push_front(3);
    list2.push_front(34);
    cout << "list2中的元素如下:" << endl;
    PrintList(list2);


    // 删除元素
    list1.pop_back();
    list1.pop_front();
    cout << "list1中的元素如下:" << endl;
    PrintList(list1);

    cout << "list1中第一个结点的值: " << list1.front() << endl << endl;
    cout << "list1中最后一个结点的值: " << list1.back() << endl << endl;

    list1.front() = 1111;  // 更改第一个元素的值
    list1.back() = 2222;  // 更改最后一个元素的值
    cout << "list1中的元素如下:" << endl;
    PrintList(list1);

    // 初始化3个5
    list<int> list3(3, 5);
    cout << "list3中的元素如下:" << endl;
    PrintList(list3);

    // 拷贝某个容器的某一段数据
    list<int> list4(list1.begin(), list1.end());
    cout << "list4中的元素如下:" << endl;
    PrintList(list4);

    list<int>::iterator left, right;
    left = list2.begin();
    left++;
    right = list2.end();
    right--;

    list<int> list5(left, right);
    cout << "list5中的元素如下:" << endl;
    PrintList(list5);

    // 拷贝构造函数
    list<int> list6(list5);
    cout << "list6中的元素如下:" << endl;
    PrintList(list6);
    return 0;
}