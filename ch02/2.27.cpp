//
// Created by young on 2018/12/12.
//

#include<iostream>

int main() {
    // 不合法, 引用初始化时必须绑定对象，而不能绑定字面值或某个表达式结果
    // int i = -1, &r = 0;

    // int *const p2 = &i2;

    const int i = -1, &r = 0;
}