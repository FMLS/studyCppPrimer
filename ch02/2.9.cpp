//
// Created by young on 2018/12/11.
//

#include<iostream>

int main() {
    // 编译错误
    // std::cin >> int input_value;

    // 编译错误
    // int i = {3.14};

    // 编译错误
    // double salary = wage = 9999.99;

    // 编译通过 i被强制转换为int型
    int i = 3.14;
    std::cout << i << std::endl;
}