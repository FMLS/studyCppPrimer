//
// Created by young on 2018/12/18.
//

#include<iostream>

using std::string;

int main() {
    string line;

    while (getline(std::cin, line)) {
        std::cout << line << std::endl;
    }

    return 0;
}
