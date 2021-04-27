#include <iostream>

union endian {
    int a;
    short int b;
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    endian value{};
    value.a = 0x12340000;
    //a和ch共用4字节的内存空间
    if (value.b == 0x1234)
        std::cout << "big endian"<< std::endl;
    else if (value.b == 0x0)
        std::cout << "little endian"<< std::endl;

    return 0;
}
