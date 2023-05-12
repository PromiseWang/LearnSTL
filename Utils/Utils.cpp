//
// Created by Promise on 2023/5/9.
//

#include "Utils.h"

void PrintVector(vector<int> &vec) {
    if (vec.empty()) {
        cout << "这个容器为空" << endl;
        return;
    }
    for (auto i: vec) {
        cout << i << "\t";
    }
    cout << endl;
}


void PrintDeque(deque<int> &deq) {
    if (deq.empty()) {
        cout << "这个容器为空" << endl;
        return;
    }
    for (auto i: deq) {
        cout << i << "\t";
    }
    cout << endl;
}