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
    cout << endl << endl;
}


void PrintDeque(deque<int> &deq) {
    if (deq.empty()) {
        cout << "这个容器为空" << endl;
        return;
    }
    for (auto i: deq) {
        cout << i << "\t";
    }
    cout << endl << endl;
}

void PrintList(list<int> &list) {
    if (list.empty()) {
        cout << "这个容器为空" << endl;
        return;
    }
    for (auto i: list) {
        cout << i << "\t";
    }
    cout << endl << endl;
}