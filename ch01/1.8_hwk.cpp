//
// Created by young on 2018/12/5.
//

#include<iostream>

int main() {
    // 正确 std::cout << "/*";
    // 正确 std::cout << "*/";
    // 错误 std::cout << /* "*/" */;
    // 正确 std::cout << /* "*/" /* "/*"*/;
}

