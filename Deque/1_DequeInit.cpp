#include "Utils.h"

int main() {
    deque<int> deque1 = {1, 2, 3, 4, 5, 6};
    deque1.push_front(0);
    cout << "deque1Ԫ����������:" << endl;
    PrintDeque(deque1);

    deque1.pop_front();
    cout << "deque1Ԫ����������:" << endl;
    PrintDeque(deque1);

    return 0;
}