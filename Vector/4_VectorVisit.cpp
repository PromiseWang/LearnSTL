#include "Utils.h"

int main() {
    // 关于越界问题   可能会报错
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    vector<int> vector1;
    vector1.assign(a, a + sizeof(a) / sizeof(int));
    cout << "vector1的大小为: " << vector1.size() << endl;
    cout << vector1[7] << endl;
    cout << vector1[100] << endl;
    cout << vector1[1000] << endl;
    // cout << a[7];  // 越界
    // cout << vector1.at(7) << endl;   // 越界报错, 抛出out_of_range异常
    return 0;
}