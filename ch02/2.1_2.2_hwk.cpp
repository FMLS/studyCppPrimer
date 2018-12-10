//
// Created by young on 2018/12/7.
//
#include<iostream>

int main() {
    // C++ 只定义了每种类型的最小长度, short 和 int 最少16个bit, long 最少32个bit
    // long long 最少64个bit

    std::cout << " sizeof int: "        << sizeof(int)       << std::endl;
    std::cout << " sizeof long: "       << sizeof(long)      << std::endl;
    std::cout << " sizeof long long: "  << sizeof(long long) << std::endl;


    // signed 可以表示正数和负数, unsigned只能表示非负数, 同样bit数目, signed表示的非负数范围比unsigned小一半

    // float 和 double 在C++中并没有规定具体的表示长度, 一般用double, 因为double和float的计算开销相差无几,
    // 而且double比float的范围更大, 避免溢出问题

    float f = 0.1;
    double d = 0.1;

    std::cout << " sizeof float: " << sizeof(float) << " example: " << f << std::endl;
    std::cout << " sizeof double: " << sizeof(double) << " example: " << d << std::endl;


    // 2.2 对于银行贷款利率，本金，付款使用double类型, 因为double类型长度和精度都有保证, 但是对于大额交易
    // 也有溢出的可能，就应该实现"大数字"类型来使用

}

