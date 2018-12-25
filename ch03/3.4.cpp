//
// Created by young on 2018/12/18.
//

#include<iostream>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    if (s1 > s2) {
        cout << s1 << endl;
    } else if (s1 < s2) {
        cout << s2 << endl;
    } else {
        cout << "equal" << endl;
    }

    return 0;
}