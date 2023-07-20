#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    string s;
    cin >> s;
    if (s.find('.') != -1) {
        int index = s.find('.');
        string s1 = s.substr(0, index);
        string s2 = s.substr(index + 1, s.length());
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        long long t = stoll(s1);
        cout << t << ".";

        t = stoll(s2);
        while (t % 10 == 0) {
            t /= 10;
        }
        cout << t;
        // s1 += "." + s2;
        // cout << stod(s1);
    } else if (s.find('/') != -1) {
        int index = s.find('/');
        string s1 = s.substr(0, index);
        string s2 = s.substr(index + 1, s.length());
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        cout << stol(s1) << "/" << stol(s2);
    } else if (s.find('%') != -1) {
        string s1 = s.substr(0, s.length() - 1);
        reverse(s1.begin(), s1.end());
        cout << stol(s1) << "%";
    } else {
        string s1 = s.substr(0, s.length());
        reverse(s1.begin(), s1.end());
        cout << stol(s1);
    }

    return 0;
}