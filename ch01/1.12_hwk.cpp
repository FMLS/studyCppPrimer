//
// Created by young on 2018/12/5.
//

#include<iostream>

int main() {
    int sum = 0;
    for (int i = -100; i <= 100; ++i) {
        sum += i;
    }
    std::cout << "sum: " << sum << std::endl;
}