//
// Created by young on 2018/12/7.
//

#include<iostream>

int main() {
    unsigned u = 10, u2 = 42;

    // 32
    std::cout << u2 - u << std::endl;

    // 4294967264
    std::cout << u - u2 << std::endl;

    int i = 10, i2 = 42;

    // 32
    std::cout << i2 - i << std::endl;
    // -2**5
    std::cout << i - i2 << std::endl;
    // 0
    std::cout << i - u << std::endl;
    // 0
    std::cout << u - i << std::endl;
}