#include <iostream>

#pragma pack(4)  /// 注意点 1
struct TestA {
    char a; // 1
    char b; // 1
    double c; // 8
    int d;  //4
};
#pragma pack() /// 注意点 2

struct TestB {
    char h[6]; //6
    char i[4]; //4
    int j;  //4
    double k; // 8

};


int main() {
    std::cout << "Hello, World!" << std::endl;
    TestA testA{};
    TestB testB{};
    // 64位电脑  不通过 #pragma pack(4)  设置对齐 TestA 中 a,b 一起占 8 字节; c  8 字节 ;d 占 8 字节
    std::cout << "sizeof(testA) = " << sizeof(testA) << std::endl;
    // 64位电脑  不通过 #pragma pack(4)  设置对齐 testB 中 h[6] 占 8 字节; i[4] 与 j 一起占 8 字节, k  8 字节
    std::cout << "sizeof(testB) = " << sizeof(testB) << std::endl;

    return 0;
}
