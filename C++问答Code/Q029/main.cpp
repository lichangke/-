#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;

    int a = 0x12345678; // 4 字节
    //由于int和 short int 的长度不同，借助int型转换成 short int 型，只会留下低地址的部分
    auto c = (short int)(a);
    if (c == 0x1234)
        std::cout << "big endian" << std::endl;
    else if(c == 0x5678)
        std::cout << "little endian" << std::endl;
    else
        std::cout << "error" << std::endl;

    return 0;
}
